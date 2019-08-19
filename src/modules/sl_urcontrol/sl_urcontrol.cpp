/****************************************************************************
 *
 *   Copyright (c) 2018 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/**
 * @file sl_urcontrol.c
 * Simulink connector
 * 
 *
 * @author Bram Strack van Schijndel <bramsvs@gmail.com>
 */

#include <conversion/rotation.h>
#include <drivers/drv_hrt.h>
#include <lib/ecl/geo/geo.h>
#include <circuit_breaker/circuit_breaker.h>
#include <mathlib/math/Limits.hpp>
#include <mathlib/math/Functions.hpp>

#include "sl_urcontrol.hpp"

#include "URControl/URControl.h"
#include <px4_log.h>
#include <stdio.h>

#define TPA_RATE_LOWER_LIMIT 0.05f

#define AXIS_INDEX_ROLL 0
#define AXIS_INDEX_PITCH 1
#define AXIS_INDEX_YAW 2
#define AXIS_COUNT 3

using namespace matrix;

URControlModelClass URControl;

int SlURControl::print_usage(const char *reason)
{
	if (reason)
	{
		PX4_WARN("%s\n", reason);
	}

	PRINT_MODULE_DESCRIPTION(
		R"DESCR_STR(
### Description

### Implementation

)DESCR_STR");

	PRINT_MODULE_USAGE_NAME("sl_urcontrol", "controller");
	PRINT_MODULE_USAGE_COMMAND("start");
	PRINT_MODULE_USAGE_DEFAULT_COMMANDS();

	return 0;
}

SlURControl::SlURControl() : ModuleParams(nullptr),
							 _loop_perf(perf_alloc(PC_ELAPSED, "sl_urcontrol"))
{
	URControl.initialize();

	for (uint8_t i = 0; i < MAX_GYRO_COUNT; i++)
	{
		_sensor_gyro_sub[i] = -1;
	}

	/* initialize thermal corrections as we might not immediately get a topic update (only non-zero values) */
	for (unsigned i = 0; i < 3; i++)
	{
		// used scale factors to unity
		_sensor_correction.gyro_scale_0[i] = 1.0f;
		_sensor_correction.gyro_scale_1[i] = 1.0f;
		_sensor_correction.gyro_scale_2[i] = 1.0f;
	}

	parameters_updated();

	// /* advertise debug value */
	strncpy(dbg.key, "sl_urcontrol_rate", 10);
	pub_dbg = orb_advertise(ORB_ID(debug_key_value), &dbg);

	pub_urcontrol_input = orb_advertise(ORB_ID(urcontrol_input), &_urcontrol_input);

	PX4_INFO("Initialized");
}

void SlURControl::parameters_updated()
{
	/* Store some of the parameters in a more convenient way & precompute often-used values */

	_actuators_0_circuit_breaker_enabled = circuit_breaker_enabled("CBRK_RATE_CTRL", CBRK_RATE_CTRL_KEY);

	/* get transformation matrix from sensor/board to body frame */
	_board_rotation = get_rot_matrix((enum Rotation)_board_rotation_param.get());

	/* fine tune the rotation */
	Dcmf board_rotation_offset(Eulerf(
		M_DEG_TO_RAD_F * _board_offset_x.get(),
		M_DEG_TO_RAD_F * _board_offset_y.get(),
		M_DEG_TO_RAD_F * _board_offset_z.get()));
	_board_rotation = board_rotation_offset * _board_rotation;

	// _sample_rate_max = _sl_pos_ctrl_rate.get();

	// Inputs
	URControl.URControl_U.pos_sp[0] = _sl_x_pos_sp.get();
	URControl.URControl_U.pos_sp[1] = _sl_y_pos_sp.get();
	URControl.URControl_U.pos_sp[2] = _sl_z_pos_sp.get();
	URControl.URControl_U.yaw_sp = _sl_yaw_sp.get();

	// Params
	URControlParams.fail_delay = _sl_fail_delay.get();
	URControlParams.fail_wRot = _sl_fail_wrot.get();

	// Estimation
	URControlParams.est_optiDx = _sl_est_optiDx.get();
	URControlParams.est_optiDy = _sl_est_optiDy.get();
	URControlParams.est_useEKF = _sl_est_useekf.get();
	URControlParams.est_omegaFilterT = _sl_est_omegafiltert.get();
	URControlParams.est_posFilterT = _sl_est_posfiltert.get();
	URControlParams.est_velFilterT = _sl_est_velfiltert.get();

	// Position
	URControlParams.position_enable = _sl_pos_enable.get();
	URControlParams.position_Kp_pos[0] = _sl_pos_kp_posx.get();
	URControlParams.position_Kp_pos[1] = _sl_pos_kp_posy.get();
	URControlParams.position_Kp_pos[2] = _sl_pos_kp_posz.get();
	URControlParams.position_Kp_vel[0] = _sl_pos_kp_velx.get();
	URControlParams.position_Kp_vel[1] = _sl_pos_kp_vely.get();
	URControlParams.position_Kp_vel[2] = _sl_pos_kp_velz.get();
	URControlParams.position_Ki_vel[0] = _sl_pos_ki_velx.get();
	URControlParams.position_Ki_vel[1] = _sl_pos_ki_vely.get();
	URControlParams.position_Ki_vel[2] = _sl_pos_ki_velz.get();
	URControlParams.position_failGain = _sl_pos_failGain.get();
	URControlParams.position_intLim = _sl_pos_intlim.get();

	// Altitude
	URControlParams.altitude_Kp_pos = _sl_alt_kp_pos.get();
	URControlParams.altitude_Kp_vel = _sl_alt_kp_vel.get();
	URControlParams.altitude_Ki_vel = _sl_alt_ki_vel.get();

	// YRC
	URControlParams.YRC_enable = _sl_yrc_enable.get();
	URControlParams.YRC_mode = _sl_yrc_mode.get();
	URControlParams.YRC_Kp_psi = _sl_yrc_Kp_psi.get();
	URControlParams.YRC_rateCmd = _sl_yrc_rateCmd.get();
	URControlParams.YRCFail_mode = _sl_yrcfail_mode.get();
	URControlParams.YRCFail_Kp_dMzGain = _sl_yrcfail_mzgain.get();

	// Attitude
	URControlParams.attitude_rotKp = _sl_attitude_rotKp.get();
	URControlParams.attitude_precMode = _sl_attitude_precmode.get();
	URControlParams.attitude_precAngle = _sl_attitude_precangle.get();
	URControlParams.attitude_maxPrecSpeed = _sl_attitude_maxprecspeed.get();
	URControlParams.attitude_MMargin = _sl_attitude_mmargin.get();
	URControlParams.attitude_enableTraj = _sl_attitude_enabletraj.get();
	URControlParams.attitude_rotSpeedComp = _sl_attitude_rotspeedcomp.get();
	URControlParams.attitude_yrcComp = _sl_attitude_yrcComp.get();

	// Envelope
	URControlParams.envp_enable = _sl_envp_enable.get();
	URControlParams.envp_mode = _sl_envp_mode.get();

	// Rate
	URControlParams.rate_mode = _sl_rate_mode.get();
	URControlParams.rate_momentMode = _sl_rate_momentMode.get();

	// Rate - INDI
	URControlParams.rate_INDI_rateDotKp[0] = _sl_ratedot_indi_kpx.get();
	URControlParams.rate_INDI_rateDotKp[1] = _sl_ratedot_indi_kpy.get();
	URControlParams.rate_INDI_rateDotKp[2] = _sl_ratedot_indi_kpz.get();
	URControlParams.rate_INDI_omegaDotFilterT = _sl_ratedot_indi_omegaDotFilt.get();
	URControlParams.rate_INDI_accZFilterT = _sl_ratedot_indi_accZFilt.get();

	// Rate - QPINDI
	URControlParams.rate_roll_eff = _sl_ratedot_indi_roll_eff.get();
	URControlParams.rate_pitch_eff = _sl_ratedot_indi_pitch_eff.get();
	URControlParams.rate_yaw_eff = _sl_ratedot_indi_yaw_eff.get();
	URControlParams.rate_az_eff = _sl_ratedot_indi_az_eff.get();

	URControlParams.rate_QPINDI_dwMax = _sl_ratedot_qpindi_dwmax.get();
	URControlParams.rate_QPINDI_minGain = _sl_ratedot_qpindi_mingain.get();

	// Rate - MPID
	URControlParams.rate_MPID_rateDotKp[0] = _sl_ratedot_kpu.get();
	URControlParams.rate_MPID_rateDotKp[1] = _sl_ratedot_kpv.get();
	URControlParams.rate_MPID_rateDotKp[2] = _sl_ratedot_kpr.get();
	URControlParams.rate_MPID_rateDotKi[0] = _sl_ratedot_kiu.get();
	URControlParams.rate_MPID_rateDotKi[1] = _sl_ratedot_kiv.get();
	URControlParams.rate_MPID_rateDotKi[2] = _sl_ratedot_kir.get();
	URControlParams.rate_MPID_rateDotKd[0] = _sl_ratedot_kdu.get();
	URControlParams.rate_MPID_rateDotKd[1] = _sl_ratedot_kdv.get();
	URControlParams.rate_MPID_rateDotKd[2] = _sl_ratedot_kdr.get();
	URControlParams.rate_MPID_derFilterT = _sl_ratedot_derFilterT.get();
	URControlParams.rate_MPID_uvrdesderFilterT = _sl_ratedot_uvrdesderFilterT.get();
	URControlParams.rate_MPID_maxInt = _sl_ratedot_maxInt.get();
	URControlParams.rate_MPID_precGain = _sl_ratedot_precGain.get();

	URControlParams.rate_FtotGain = _sl_ratedot_ftot.get();

	// Rate - MINDI
	// URControlParams.rate_MINDI_derFilterT = _sl_ratedot_mindi_derFiltT.get();
	// URControlParams.rate_MINDI_MKp[0] = _sl_ratedot_mindi_mkpu.get();
	// URControlParams.rate_MINDI_MKp[1] = _sl_ratedot_mindi_mkpv.get();
	// URControlParams.rate_MINDI_MKp[2] = _sl_ratedot_mindi_mkpr.get();

	// Overrides
	URControlParams.flip_mode = _sl_flip_mode.get();
	URControlParams.flip_time = _sl_flip_time.get();
	URControlParams.flip_upTime = _sl_flip_uptime.get();
	URControlParams.flip_intensityX = _sl_flip_intensityX.get();
	URControlParams.flip_intensityY = _sl_flip_intensityY.get();

	URControlParams.throw_mode = _sl_throw_mode.get();
	URControlParams.throw_falltime = _sl_throw_falltime.get();
	URControlParams.throw_threshold = _sl_throw_threshold.get();

	// //QPpredControl
	// URControlParams.Kp 	= _sl_qp_kp.get();
	// URControlParams.Kd 	= _sl_qp_kd.get();
	// URControlParams.kdr = _sl_qp_kdr.get();
	// URControlParams.th 	= _sl_qp_th.get();
	// URControlParams.p1 	= _sl_qp_thr_gain.get();
	// URControlParams.p2 	= _sl_qp_env_gain.get();
	// URControlParams.pr 	= _sl_qp_yaw_gain.get();
	// URControlParams.omega_max = _sl_qp_env_omega.get();

	// Alt Protect
	URControlParams.fail_altProt = _sl_fail_prot.get();
	URControlParams.fail_altThresh = _sl_fail_alt_thresh.get();
}

void SlURControl::parameter_update_poll()
{
	bool updated;

	/* Check if parameters have changed */
	orb_check(_params_sub, &updated);

	if (updated)
	{
		struct parameter_update_s param_update;
		orb_copy(ORB_ID(parameter_update), _params_sub, &param_update);
		updateParams();
		parameters_updated();
	}
}

void SlURControl::vehicle_control_mode_poll()
{
	bool updated;

	/* Check if vehicle control mode has changed */
	orb_check(_v_control_mode_sub, &updated);

	if (updated)
	{
		orb_copy(ORB_ID(vehicle_control_mode), _v_control_mode_sub, &_v_control_mode);
	}
}

void SlURControl::vehicle_status_poll()
{
	/* check if there is new status information */
	bool vehicle_status_updated;
	orb_check(_vehicle_status_sub, &vehicle_status_updated);

	if (vehicle_status_updated)
	{
		orb_copy(ORB_ID(vehicle_status), _vehicle_status_sub, &_vehicle_status);
	}
}

void SlURControl::vehicle_attitude_poll()
{
	/* check if there is a new message */
	bool updated;
	orb_check(_v_att_sub, &updated);

	if (updated)
	{
		orb_copy(ORB_ID(vehicle_attitude), _v_att_sub, &_v_att);
	}
}

void SlURControl::sensor_correction_poll()
{
	/* check if there is a new message */
	bool updated;
	orb_check(_sensor_correction_sub, &updated);

	if (updated)
	{
		orb_copy(ORB_ID(sensor_correction), _sensor_correction_sub, &_sensor_correction);
	}

	/* update the latest gyro selection */
	if (_sensor_correction.selected_gyro_instance < _gyro_count)
	{
		_selected_gyro = _sensor_correction.selected_gyro_instance;
	}
}

void SlURControl::sensor_bias_poll()
{
	/* check if there is a new message */
	bool updated;
	orb_check(_sensor_bias_sub, &updated);

	if (updated)
	{
		orb_copy(ORB_ID(sensor_bias), _sensor_bias_sub, &_sensor_bias);
	}
}

void SlURControl::sensor_combined_poll()
{
	/* check if there is a new message */
	bool updated;
	orb_check(_sensor_combined_sub, &updated);

	if (updated)
	{
		orb_copy(ORB_ID(sensor_combined), _sensor_combined_sub, &_sensor_combined);
	}
}

void SlURControl::vehicle_local_position_poll()
{
	/* check if there is a new message */
	bool updated;
	orb_check(_vehicle_local_position_sub, &updated);

	if (updated)
	{
		orb_copy(ORB_ID(vehicle_local_position), _vehicle_local_position_sub, &_vehicle_local_position);
	}
}

void SlURControl::vehicle_local_pos_sp_poll()
{
	/* Check if parameters have changed */
	bool updated;
	orb_check(_local_pos_sp_sub, &updated);

	if (updated)
	{
		orb_copy(ORB_ID(vehicle_local_position_setpoint), _local_pos_sp_sub, &_local_pos_sp);
	}
}

void SlURControl::loe_detector_status_poll()
{
	/* check if there is a new message */
	bool updated;
	orb_check(_loe_detector_status_sub, &updated);

	if (updated)
	{
		orb_copy(ORB_ID(loe_detector_status), _loe_detector_status_sub, &_loe_detector_status);
	}
}

void SlURControl::esc_status_poll()
{
	/* check if there is a new message */
	bool updated;
	orb_check(_esc_status_sub, &updated);

	if (updated)
	{
		orb_copy(ORB_ID(esc_status), _esc_status_sub, &_esc_status);
	}
}

void SlURControl::odometry_status_poll()
{
	/* check if there is a new message */
	bool updated;
	orb_check(_ev_odom_sub, &updated);

	if (updated)
	{
		orb_copy(ORB_ID(vehicle_visual_odometry), _ev_odom_sub, &_ev_odom);
		//PX4_INFO("Odometry data updated!\n");
	}
}

void SlURControl::position_setpoint_triplet_poll()
{
	/* check if there is a new message */
	bool updated;
	orb_check(_position_sp_triplet_sub, &updated);

	if (updated)
	{
		orb_copy(ORB_ID(position_setpoint_triplet), _position_sp_triplet_sub, &_position_sp_triplet);
	}
}

/*
 * Position controller.
 * Input: 
 * Output: 'actuator_controls'
 */
void SlURControl::control_ur(float dt)
{
	// get the raw gyro data and correct for thermal errors
	Vector3f rates;
	Vector3f accs;

	if (_selected_gyro == 0)
	{
		rates(0) = (_sensor_gyro.x - _sensor_correction.gyro_offset_0[0]) * _sensor_correction.gyro_scale_0[0];
		rates(1) = (_sensor_gyro.y - _sensor_correction.gyro_offset_0[1]) * _sensor_correction.gyro_scale_0[1];
		rates(2) = (_sensor_gyro.z - _sensor_correction.gyro_offset_0[2]) * _sensor_correction.gyro_scale_0[2];
	}
	else if (_selected_gyro == 1)
	{
		rates(0) = (_sensor_gyro.x - _sensor_correction.gyro_offset_1[0]) * _sensor_correction.gyro_scale_1[0];
		rates(1) = (_sensor_gyro.y - _sensor_correction.gyro_offset_1[1]) * _sensor_correction.gyro_scale_1[1];
		rates(2) = (_sensor_gyro.z - _sensor_correction.gyro_offset_1[2]) * _sensor_correction.gyro_scale_1[2];
	}
	else if (_selected_gyro == 2)
	{
		rates(0) = (_sensor_gyro.x - _sensor_correction.gyro_offset_2[0]) * _sensor_correction.gyro_scale_2[0];
		rates(1) = (_sensor_gyro.y - _sensor_correction.gyro_offset_2[1]) * _sensor_correction.gyro_scale_2[1];
		rates(2) = (_sensor_gyro.z - _sensor_correction.gyro_offset_2[2]) * _sensor_correction.gyro_scale_2[2];
	}
	else
	{
		rates(0) = _sensor_gyro.x;
		rates(1) = _sensor_gyro.y;
		rates(2) = _sensor_gyro.z;
	}

	// rotate corrected measurements from sensor to body frame
	rates = _board_rotation * rates;

	// correct for in-run bias errors
	rates(0) -= _sensor_bias.gyro_x_bias;
	rates(1) -= _sensor_bias.gyro_y_bias;
	rates(2) -= _sensor_bias.gyro_z_bias;

	accs(0) = _sensor_combined.accelerometer_m_s2[0];
	accs(1) = _sensor_combined.accelerometer_m_s2[1];
	accs(2) = _sensor_combined.accelerometer_m_s2[2];

	// PX4_INFO("%f\t%f\t%f\n",static_cast<double>(accs(0)),static_cast<double>(accs(1)),static_cast<double>(accs(2)));
	// PX4_INFO("%f\t%f\t%f",static_cast<double>(_sensor_correction.accel_offset_0[0]),static_cast<double>(_sensor_correction.accel_offset_0[1]),static_cast<double>(_sensor_correction.accel_offset_0[2]));
	// PX4_INFO("%f\t%f\t%f",static_cast<double>(_sensor_correction.accel_offset_1[0]),static_cast<double>(_sensor_correction.accel_offset_1[1]),static_cast<double>(_sensor_correction.accel_offset_1[2]));
	// PX4_INFO("%f\t%f\t%f\n",static_cast<double>(_sensor_correction.accel_offset_2[0]),static_cast<double>(_sensor_correction.accel_offset_2[1]),static_cast<double>(_sensor_correction.accel_offset_2[2]));

	// // gyro measurements
	// rates(0) = _sensor_combined.gyro_rad[0];
	// rates(1) = _sensor_combined.gyro_rad[1];
	// rates(2) = _sensor_combined.gyro_rad[2];

	// // accelerometer measurements
	// accs(0) = _sensor_combined.accelerometer_m_s2[0];
	// accs(1) = _sensor_combined.accelerometer_m_s2[1];
	// accs(2) = _sensor_combined.accelerometer_m_s2[2];

	/* get estimated attitude */
	Quatf q_v_att(_v_att.q);
	Quatf q(_ev_odom.q);

	/* ensure input quaternions are exactly normalized because acosf(1.00001) == NaN */
	q.normalize();
	q_v_att.normalize();

	ExtU_URControl_T URControl_input;

	URControl_input.vel[0] = _vehicle_local_position.vx;
	URControl_input.vel[1] = _vehicle_local_position.vy;
	URControl_input.vel[2] = _vehicle_local_position.vz;

	// URControl_input.pos[0] = _vehicle_local_position.x;
	// URControl_input.pos[1] = _vehicle_local_position.y;
	// URControl_input.pos[2] = _vehicle_local_position.z;

	if (isnan(_ev_odom.x))
		URControl_input.pos[0] = 0;
	else
		URControl_input.pos[0] = _ev_odom.x;
	if (isnan(_ev_odom.y))
		URControl_input.pos[1] = 0;
	else
		URControl_input.pos[1] = _ev_odom.y;
	if (isnan(_ev_odom.z))
		URControl_input.pos[2] = 0;
	else
		URControl_input.pos[2] = _ev_odom.z;

	URControl_input.rates[0] = rates(0);
	URControl_input.rates[1] = rates(1);
	URControl_input.rates[2] = rates(2);

	URControl_input.accs[0] = accs(0);
	URControl_input.accs[1] = accs(1);
	URControl_input.accs[2] = accs(2);

	// See pass.main.mix for esc mapping.
	URControl_input.esc_rpm[0] = _esc_status.esc[2].esc_rpm;
	URControl_input.esc_rpm[1] = _esc_status.esc[0].esc_rpm;
	URControl_input.esc_rpm[2] = _esc_status.esc[3].esc_rpm;
	URControl_input.esc_rpm[3] = _esc_status.esc[1].esc_rpm;

	Eulerf euler_angles(q);
	Eulerf euler_angles_v_att(q_v_att);

	// euler_angles(0) = euler_angles_v_att(0);
	// euler_angles(1) = euler_angles_v_att(1);
	// euler_angles(2) = euler_angles_v_att(2);

	if (isnan(euler_angles.phi()))
		URControl_input.att[0] = 0;
	else
		URControl_input.att[0] = euler_angles.phi();
	if (isnan(euler_angles.theta()))
		URControl_input.att[1] = 0;
	else
		URControl_input.att[1] = euler_angles.theta(); // - static_cast<float>(0.03);
	if (isnan(euler_angles.psi()))
		URControl_input.att[2] = 0;
	else
		URControl_input.att[2] = euler_angles.psi() + static_cast<float>(0.0);

	// Set in params for now..
	//URControl_input.pos_sp[0] = _position_sp_triplet.current.y;
	//URControl_input.pos_sp[1] = _position_sp_triplet.current.x;
	//URControl_input.pos_sp[2] = _position_sp_triplet.current.z;

	// URControl_input.yaw_sp = 0.f;

	URControl_input.fail_flag = _loe_detector_status.fail_id;

	if (_sl_fail_flag.get() >= 0)
	{
		URControl_input.fail_flag = _sl_fail_flag.get();
	}

	URControl.URControl_U = URControl_input;

	float t_step_start = hrt_absolute_time();

	URControl.step();
	_step_count++;

	// `urcontrol_input` logger
	_urcontrol_input.timestamp = hrt_absolute_time();

	_urcontrol_input.vel[0] = _vehicle_local_position.vx;
	_urcontrol_input.vel[1] = _vehicle_local_position.vy;
	_urcontrol_input.vel[2] = _vehicle_local_position.vz;

	// _urcontrol_input.pos[0] = _vehicle_local_position.x;
	// _urcontrol_input.pos[1] = _vehicle_local_position.y;
	// _urcontrol_input.pos[2] = _vehicle_local_position.z;
	_urcontrol_input.pos[0] = URControl_input.pos[0];
	_urcontrol_input.pos[1] = URControl_input.pos[1];
	_urcontrol_input.pos[2] = URControl_input.pos[2];

	_urcontrol_input.rates[0] = rates(0);
	_urcontrol_input.rates[1] = rates(1);
	_urcontrol_input.rates[2] = rates(2);

	// _urcontrol_input.att[0] = euler_angles.phi();
	// _urcontrol_input.att[1] = euler_angles.theta();
	// _urcontrol_input.att[2] = euler_angles.psi();
	_urcontrol_input.att[0] = URControl_input.att[0];
	_urcontrol_input.att[1] = URControl_input.att[1];
	_urcontrol_input.att[2] = URControl_input.att[2];

	_urcontrol_input.esc_rpm[0] = URControl_input.esc_rpm[0];
	_urcontrol_input.esc_rpm[1] = URControl_input.esc_rpm[1];
	_urcontrol_input.esc_rpm[2] = URControl_input.esc_rpm[2];
	_urcontrol_input.esc_rpm[3] = URControl_input.esc_rpm[3];

	_urcontrol_input.accs[0] = URControl_input.accs[0];
	_urcontrol_input.accs[1] = URControl_input.accs[1];
	_urcontrol_input.accs[2] = URControl_input.accs[2];

	// _urcontrol_input.pos_sp[0] = URControl_input.pos_sp[0];
	// _urcontrol_input.pos_sp[1] = URControl_input.pos_sp[1];
	// _urcontrol_input.pos_sp[2] = URControl_input.pos_sp[2];

	_urcontrol_input.pos_sp[0] = URControl.URControl_U.pos_sp[0];
	_urcontrol_input.pos_sp[1] = URControl.URControl_U.pos_sp[1];
	_urcontrol_input.pos_sp[2] = URControl.URControl_U.pos_sp[2];

	_urcontrol_input.yaw_sp = 0;

	_urcontrol_input.fail_flag = URControl.URControl_U.fail_flag;

	_urcontrol_input.dt_step = hrt_absolute_time() - t_step_start;
	_urcontrol_input.step_count = _step_count;

	// See mixer file `pass.main.mix` for exact control allocation.
	_actuators.control[0] = URControl.URControl_Y.actuators_control[0];
	_actuators.control[1] = URControl.URControl_Y.actuators_control[1];
	_actuators.control[2] = URControl.URControl_Y.actuators_control[2];
	_actuators.control[3] = URControl.URControl_Y.actuators_control[3];
}

void SlURControl::run()
{
	/*
	 * do subscriptions
	 */
	_v_att_sub = orb_subscribe(ORB_ID(vehicle_attitude));
	_v_control_mode_sub = orb_subscribe(ORB_ID(vehicle_control_mode));
	_params_sub = orb_subscribe(ORB_ID(parameter_update));
	_vehicle_status_sub = orb_subscribe(ORB_ID(vehicle_status));
	_local_pos_sp_sub = orb_subscribe(ORB_ID(vehicle_local_position_setpoint));

	_loe_detector_status_sub = orb_subscribe(ORB_ID(loe_detector_status));

	_esc_status_sub = orb_subscribe(ORB_ID(esc_status));
	_ev_odom_sub = orb_subscribe(ORB_ID(vehicle_visual_odometry));
	_gyro_count = math::min(orb_group_count(ORB_ID(sensor_gyro)), MAX_GYRO_COUNT);

	if (_gyro_count == 0)
	{
		_gyro_count = 1;
	}

	for (unsigned s = 0; s < _gyro_count; s++)
	{
		_sensor_gyro_sub[s] = orb_subscribe_multi(ORB_ID(sensor_gyro), s);
	}

	_sensor_correction_sub = orb_subscribe(ORB_ID(sensor_correction));
	_sensor_bias_sub = orb_subscribe(ORB_ID(sensor_bias));
	_sensor_combined_sub = orb_subscribe(ORB_ID(sensor_combined));
	_vehicle_local_position_sub = orb_subscribe(ORB_ID(vehicle_local_position));
	_position_sp_triplet_sub = orb_subscribe(ORB_ID(position_setpoint_triplet));

	/* wakeup source: gyro data from sensor selected by the sensor app */
	px4_pollfd_struct_t poll_fds = {};
	poll_fds.events = POLLIN;

	const hrt_abstime task_start = hrt_absolute_time();
	hrt_abstime last_run = task_start;
	float dt_log_accumulator = 0.f;

	while (!should_exit())
	{

		poll_fds.fd = _sensor_gyro_sub[_selected_gyro];

		/* wait for up to 100ms for data */
		int pret = px4_poll(&poll_fds, 1, 100);

		/* timed out - periodic check for should_exit() */
		if (pret == 0)
		{
			continue;
		}

		/* this is undesirable but not much we can do - might want to flag unhappy status */
		if (pret < 0)
		{
			PX4_ERR("poll error %d, %d", pret, errno);
			/* sleep a bit before next try */
			px4_usleep(100000);
			continue;
		}

		perf_begin(_loop_perf);

		const hrt_abstime now = hrt_absolute_time();
		float dt = (now - last_run) / 1e6f;

		float dt_min = 1.0f / _sample_rate_max;

		if (dt < dt_min)
		{
			continue;
		}

		/* run controller on gyro changes */
		if (poll_fds.revents & POLLIN)
		{

			last_run = now;

			/* guard against too small (< 0.2ms) and too large (> 20ms) dt's */
			if (dt < 0.0002f)
			{
				dt = 0.0002f;
			}
			else if (dt > 0.02f)
			{
				dt = 0.02f;
			}

			if (dt_log_accumulator > 0.1f)
			{
				dbg.value = 1 / dt;
				orb_publish(ORB_ID(debug_key_value), pub_dbg, &dbg);
				// PX4_INFO("ATT_DT: %f", static_cast<double>(dbg.value));
				dt_log_accumulator = 0;
			}

			dt_log_accumulator += dt;

			/* copy gyro data */
			orb_copy(ORB_ID(sensor_gyro), _sensor_gyro_sub[_selected_gyro], &_sensor_gyro);

			/* check for updates in other topics */
			parameter_update_poll();
			vehicle_control_mode_poll();
			vehicle_status_poll();
			vehicle_attitude_poll();
			sensor_correction_poll();
			sensor_bias_poll();
			sensor_combined_poll();
			vehicle_local_position_poll();
			vehicle_local_pos_sp_poll();

			loe_detector_status_poll();

			esc_status_poll();
			odometry_status_poll();
			position_setpoint_triplet_poll();

			control_ur(dt);

			_actuators.timestamp = hrt_absolute_time();
			_actuators.timestamp_sample = _sensor_gyro.timestamp;

			if (!_actuators_0_circuit_breaker_enabled)
			{
				if (_actuators_0_pub != nullptr)
				{
					orb_publish(ORB_ID(actuator_controls_0), _actuators_0_pub, &_actuators);
				}
				else
				{
					_actuators_0_pub = orb_advertise(ORB_ID(actuator_controls_0), &_actuators);
				}
			}
			/* publish controller input */
			orb_publish(ORB_ID(urcontrol_input), pub_urcontrol_input, &_urcontrol_input);
		}

		perf_end(_loop_perf);
	}

	orb_unsubscribe(_v_att_sub);
	orb_unsubscribe(_v_control_mode_sub);
	orb_unsubscribe(_params_sub);
	orb_unsubscribe(_vehicle_status_sub);

	for (unsigned s = 0; s < _gyro_count; s++)
	{
		orb_unsubscribe(_sensor_gyro_sub[s]);
	}

	orb_unsubscribe(_sensor_correction_sub);
	orb_unsubscribe(_sensor_bias_sub);
	orb_unsubscribe(_sensor_combined_sub);
	orb_unsubscribe(_vehicle_local_position_sub);
	orb_unsubscribe(_local_pos_sp_sub);

	orb_unsubscribe(_loe_detector_status_sub);

	orb_unsubscribe(_esc_status_sub);
	orb_unsubscribe(_ev_odom_sub);
	orb_unsubscribe(_position_sp_triplet_sub);

	URControl.terminate();
}

int SlURControl::task_spawn(int argc, char *argv[])
{
	_task_id = px4_task_spawn_cmd("sl_urcontrol",
								  SCHED_DEFAULT,
								  SCHED_PRIORITY_ATTITUDE_CONTROL,
								  1700,
								  (px4_main_t)&run_trampoline,
								  (char *const *)argv);

	if (_task_id < 0)
	{
		_task_id = -1;
		return -errno;
	}

	return 0;
}

SlURControl *SlURControl::instantiate(int argc, char *argv[])
{
	return new SlURControl();
}

int SlURControl::custom_command(int argc, char *argv[])
{
	return print_usage("unknown command");
}

int sl_urcontrol_main(int argc, char *argv[])
{
	return SlURControl::main(argc, argv);
}
