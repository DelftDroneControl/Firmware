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
 * @file sl_pos_direct_control.c
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

#include "sl_pos_direct_control.hpp"

#include "PosDirectControl/PosDirectControl.h"
#include <px4_log.h>
#include <stdio.h>

#define TPA_RATE_LOWER_LIMIT 0.05f

#define AXIS_INDEX_ROLL 0
#define AXIS_INDEX_PITCH 1
#define AXIS_INDEX_YAW 2
#define AXIS_COUNT 3

using namespace matrix;

PosDirectControlModelClass PosDirectControl;

int 
SlPosDirectControl::print_usage(const char *reason)
{
	if (reason) {
		PX4_WARN("%s\n", reason);
	}

	PRINT_MODULE_DESCRIPTION(
		R"DESCR_STR(
### Description

### Implementation

)DESCR_STR");

	PRINT_MODULE_USAGE_NAME("sl_pos_direct_control", "controller");
	PRINT_MODULE_USAGE_COMMAND("start");
	PRINT_MODULE_USAGE_DEFAULT_COMMANDS();

	return 0;
}

SlPosDirectControl::SlPosDirectControl() :
	ModuleParams(nullptr),
	_loop_perf(perf_alloc(PC_ELAPSED, "sl_pos_direct_control"))
{
	PosDirectControl.initialize(); 

	for (uint8_t i = 0; i < MAX_GYRO_COUNT; i++) {
		_sensor_gyro_sub[i] = -1;
	}

	/* initialize thermal corrections as we might not immediately get a topic update (only non-zero values) */
	for (unsigned i = 0; i < 3; i++) {
		// used scale factors to unity
		_sensor_correction.gyro_scale_0[i] = 1.0f;
		_sensor_correction.gyro_scale_1[i] = 1.0f;
		_sensor_correction.gyro_scale_2[i] = 1.0f;
	}

	parameters_updated();

	// /* advertise debug value */
	strncpy(dbg.key, "sl_pos_direct_control_rate", 10);
	pub_dbg = orb_advertise(ORB_ID(debug_key_value), &dbg);

	pub_pos_direct_control_input = orb_advertise(ORB_ID(pos_direct_control_input), &_pos_direct_control_input);

	PX4_INFO("Initialized");
}

void
SlPosDirectControl::parameters_updated()
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

	_sample_rate_max = _sl_pos_ctrl_rate.get();

	PosDirectControlParams.rot_direction = _sl_rot_direction.get();

	PosDirectControlParams.pos_x_p_gain = _sl_pos_p_gain.get();
	PosDirectControlParams.pos_z_p_gain = _sl_alt_p_gain.get();

	PosDirectControlParams.pos_x_d_gain = _sl_pos_d_gain.get();
	PosDirectControlParams.pos_z_d_gain = _sl_alt_d_gain.get();

	PosDirectControlParams.att_p_gain = _sl_att_p_gain.get();
	PosDirectControlParams.att_d_gain = _sl_att_d_gain.get();
	PosDirectControlParams.yaw_p_gain = _sl_yaw_p_gain.get();
	PosDirectControlParams.yaw_d_gain = _sl_yaw_d_gain.get();
	
	PosDirectControlParams.k = _sl_thrust_coeff.get();
	PosDirectControlParams.l = _sl_geom_l.get();
	PosDirectControlParams.b = _sl_geom_b.get();
	PosDirectControlParams.m = _sl_mass.get();
	PosDirectControlParams.Ix = _sl_inertia_x.get();
	PosDirectControlParams.Iy = _sl_inertia_y.get();
	PosDirectControlParams.Iz = _sl_inertia_z.get();
	PosDirectControlParams.Ip = _sl_inertia_prop.get();
	PosDirectControlParams.t = _sl_torque_coeff.get();
	PosDirectControlParams.rpm_feedback = _sl_rpm_feedback.get();
	
	PosDirectControl.PosDirectControl_U.pos_sp[0] = _sl_x_pos_sp.get();
	PosDirectControl.PosDirectControl_U.pos_sp[1] = _sl_y_pos_sp.get();
	PosDirectControl.PosDirectControl_U.pos_sp[2] = _sl_z_pos_sp.get();
	PosDirectControl.PosDirectControl_U.yaw_sp    = _sl_yaw_sp.get();
	PosDirectControl.PosDirectControl_U.fail_flag = _sl_fail_flag.get();
	
	_pos_direct_control_input.pos_sp[0] = _sl_x_pos_sp.get();
	_pos_direct_control_input.pos_sp[1] = _sl_y_pos_sp.get();
	_pos_direct_control_input.pos_sp[2] = _sl_z_pos_sp.get();
	_pos_direct_control_input.fail_flag = _sl_fail_flag.get();
	_pos_direct_control_input.yaw_sp 	= _sl_yaw_sp.get();
}

void
SlPosDirectControl::parameter_update_poll()
{
	bool updated;

	/* Check if parameters have changed */
	orb_check(_params_sub, &updated);

	if (updated) {
		struct parameter_update_s param_update;
		orb_copy(ORB_ID(parameter_update), _params_sub, &param_update);
		updateParams();
		parameters_updated();
	}
}

void
SlPosDirectControl::vehicle_control_mode_poll()
{
	bool updated;

	/* Check if vehicle control mode has changed */
	orb_check(_v_control_mode_sub, &updated);

	if (updated) {
		orb_copy(ORB_ID(vehicle_control_mode), _v_control_mode_sub, &_v_control_mode);
	}
}

void
SlPosDirectControl::vehicle_status_poll()
{
	/* check if there is new status information */
	bool vehicle_status_updated;
	orb_check(_vehicle_status_sub, &vehicle_status_updated);

	if (vehicle_status_updated) {
		orb_copy(ORB_ID(vehicle_status), _vehicle_status_sub, &_vehicle_status);
	}
}

void
SlPosDirectControl::vehicle_attitude_poll()
{
	/* check if there is a new message */
	bool updated;
	orb_check(_v_att_sub, &updated);

	if (updated) {
		orb_copy(ORB_ID(vehicle_attitude), _v_att_sub, &_v_att);
	}
}

void
SlPosDirectControl::sensor_correction_poll()
{
	/* check if there is a new message */
	bool updated;
	orb_check(_sensor_correction_sub, &updated);

	if (updated) {
		orb_copy(ORB_ID(sensor_correction), _sensor_correction_sub, &_sensor_correction);
	}

	/* update the latest gyro selection */
	if (_sensor_correction.selected_gyro_instance < _gyro_count) {
		_selected_gyro = _sensor_correction.selected_gyro_instance;
	}
}

void
SlPosDirectControl::sensor_bias_poll()
{
	/* check if there is a new message */
	bool updated;
	orb_check(_sensor_bias_sub, &updated);

	if (updated) {
		orb_copy(ORB_ID(sensor_bias), _sensor_bias_sub, &_sensor_bias);
	}

}


void
SlPosDirectControl::sensor_combined_poll()
{
	/* check if there is a new message */
	bool updated;
	orb_check(_sensor_combined_sub, &updated);

	if (updated) {
		orb_copy(ORB_ID(sensor_combined), _sensor_combined_sub, &_sensor_combined);
	}

}

void
SlPosDirectControl::vehicle_local_position_poll()
{
	/* check if there is a new message */
	bool updated;
	orb_check(_vehicle_local_position_sub, &updated);

	if (updated) {
		orb_copy(ORB_ID(vehicle_local_position), _vehicle_local_position_sub, &_vehicle_local_position);
	}
}

void
SlPosDirectControl::vehicle_local_pos_sp_poll()
{
	/* Check if parameters have changed */
	bool updated;
	orb_check(_local_pos_sp_sub, &updated);

	if (updated) {
		orb_copy(ORB_ID(vehicle_local_position_setpoint), _local_pos_sp_sub, &_local_pos_sp);
	}
}

void
SlPosDirectControl::esc_status_poll()
{
	/* check if there is a new message */
	bool updated;
	orb_check(_esc_status_sub, &updated);

	if (updated) {
		orb_copy(ORB_ID(esc_status), _esc_status_sub, &_esc_status);
	}

}

void
SlPosDirectControl::odometry_status_poll()
{
	/* check if there is a new message */
	bool updated;
	orb_check(_ev_odom_sub, &updated);

	if (updated) {
		orb_copy(ORB_ID(vehicle_visual_odometry), _ev_odom_sub, &_ev_odom);
		//PX4_INFO("Odometry data updated!\n");		
	}	
}

/*
 * Position controller.
 * Input: 
 * Output: 'actuator_controls'
 */
void
SlPosDirectControl::control_pos_direct(float dt)
{
	// get the raw gyro data and correct for thermal errors
	Vector3f rates;
	Vector3f accs;

	if (_selected_gyro == 0) {
		rates(0) = (_sensor_gyro.x - _sensor_correction.gyro_offset_0[0]) * _sensor_correction.gyro_scale_0[0];
		rates(1) = (_sensor_gyro.y - _sensor_correction.gyro_offset_0[1]) * _sensor_correction.gyro_scale_0[1];
		rates(2) = (_sensor_gyro.z - _sensor_correction.gyro_offset_0[2]) * _sensor_correction.gyro_scale_0[2];


	} else if (_selected_gyro == 1) {
		rates(0) = (_sensor_gyro.x - _sensor_correction.gyro_offset_1[0]) * _sensor_correction.gyro_scale_1[0];
		rates(1) = (_sensor_gyro.y - _sensor_correction.gyro_offset_1[1]) * _sensor_correction.gyro_scale_1[1];
		rates(2) = (_sensor_gyro.z - _sensor_correction.gyro_offset_1[2]) * _sensor_correction.gyro_scale_1[2];

	} else if (_selected_gyro == 2) {
		rates(0) = (_sensor_gyro.x - _sensor_correction.gyro_offset_2[0]) * _sensor_correction.gyro_scale_2[0];
		rates(1) = (_sensor_gyro.y - _sensor_correction.gyro_offset_2[1]) * _sensor_correction.gyro_scale_2[1];
		rates(2) = (_sensor_gyro.z - _sensor_correction.gyro_offset_2[2]) * _sensor_correction.gyro_scale_2[2];

	} else {
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

	accs(0)    = _sensor_combined.accelerometer_m_s2[0]-_sensor_bias.accel_x_bias;
	accs(1)    = _sensor_combined.accelerometer_m_s2[1]-_sensor_bias.accel_y_bias;
	accs(2)    = _sensor_combined.accelerometer_m_s2[2]-_sensor_bias.accel_z_bias;
	
	// PX4_INFO("%f\t%f\n",static_cast<double>(_sensor_bias.accel_x_bias),static_cast<double>(_sensor_bias.accel_z_bias));

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

	ExtU_PosDirectControl_T PosDirectControl_input;

	PosDirectControl_input.vel[0] = _vehicle_local_position.vx;
	PosDirectControl_input.vel[1] = _vehicle_local_position.vy;
	PosDirectControl_input.vel[2] = _vehicle_local_position.vz;

	// PosDirectControl_input.pos[0] = _vehicle_local_position.x;
	// PosDirectControl_input.pos[1] = _vehicle_local_position.y;
	// PosDirectControl_input.pos[2] = _vehicle_local_position.z;

	if(isnan(_ev_odom.x)) 
		PosDirectControl_input.pos[0] = 0;
	else
		PosDirectControl_input.pos[0] = _ev_odom.x;
	if(isnan(_ev_odom.y)) 
		PosDirectControl_input.pos[1] = 0;
	else
		PosDirectControl_input.pos[1] = _ev_odom.y;
	if(isnan(_ev_odom.z))
		PosDirectControl_input.pos[2] = 0;
	else 
		PosDirectControl_input.pos[2] = _ev_odom.z;

	PosDirectControl_input.rates[0] = rates(0);
	PosDirectControl_input.rates[1] = rates(1);
	PosDirectControl_input.rates[2] = rates(2);

	PosDirectControl_input.accs[0] = accs(0);
	PosDirectControl_input.accs[1] = accs(1);
	PosDirectControl_input.accs[2] = accs(2);

	// See pass.main.mix for esc mapping.
	PosDirectControl_input.esc_rpm[0] = _esc_status.esc[2].esc_rpm;
	PosDirectControl_input.esc_rpm[1] = _esc_status.esc[0].esc_rpm;
	PosDirectControl_input.esc_rpm[2] = _esc_status.esc[3].esc_rpm;
	PosDirectControl_input.esc_rpm[3] = _esc_status.esc[1].esc_rpm;

	Eulerf euler_angles(q);
	Eulerf euler_angles_v_att(q_v_att);
	euler_angles(2) = euler_angles_v_att(2);

	if(isnan(euler_angles.phi())) 
		PosDirectControl_input.att[0] = 0; 
	else 
		PosDirectControl_input.att[0] = euler_angles.phi(); 
	if(isnan(euler_angles.theta())) 
		PosDirectControl_input.att[1] = 0; 
	else 
		PosDirectControl_input.att[1] = euler_angles.theta(); 
	if(isnan(euler_angles.psi())) 
		PosDirectControl_input.att[2] = 0; 
	else 
		PosDirectControl_input.att[2] = euler_angles.psi(); 
	
	// Set in params for now..
	// PosDirectControl_input.pos_sp[0] = _local_pos_sp.x;
	// PosDirectControl_input.pos_sp[1] = _local_pos_sp.y;
	// PosDirectControl_input.pos_sp[2] = _local_pos_sp.z;

	// PosDirectControl_input.yaw_sp = 0.f;

	PosDirectControl.PosDirectControl_U = PosDirectControl_input;

	// float t_step_start = hrt_absolute_time();
	
	PosDirectControl.step();

	// `pos_direct_control_input` logger
	_pos_direct_control_input.timestamp = hrt_absolute_time();

	_pos_direct_control_input.vel[0] = _vehicle_local_position.vx;
	_pos_direct_control_input.vel[1] = _vehicle_local_position.vy;
	_pos_direct_control_input.vel[2] = _vehicle_local_position.vz;

	// _pos_direct_control_input.pos[0] = _vehicle_local_position.x;
	// _pos_direct_control_input.pos[1] = _vehicle_local_position.y;
	// _pos_direct_control_input.pos[2] = _vehicle_local_position.z;
	_pos_direct_control_input.pos[0] = PosDirectControl_input.pos[0];
	_pos_direct_control_input.pos[1] = PosDirectControl_input.pos[1];
	_pos_direct_control_input.pos[2] = PosDirectControl_input.pos[2];

	_pos_direct_control_input.rates[0] = rates(0);
	_pos_direct_control_input.rates[1] = rates(1);
	_pos_direct_control_input.rates[2] = rates(2);

	// _pos_direct_control_input.att[0] = euler_angles.phi();
	// _pos_direct_control_input.att[1] = euler_angles.theta();
	// _pos_direct_control_input.att[2] = euler_angles.psi();
	_pos_direct_control_input.att[0] = PosDirectControl_input.att[0];
	_pos_direct_control_input.att[1] = PosDirectControl_input.att[1];
	_pos_direct_control_input.att[2] = PosDirectControl_input.att[2];
	
	_pos_direct_control_input.esc_rpm[0] = PosDirectControl_input.esc_rpm[0];
	_pos_direct_control_input.esc_rpm[1] = PosDirectControl_input.esc_rpm[1];
	_pos_direct_control_input.esc_rpm[2] = PosDirectControl_input.esc_rpm[2];
	_pos_direct_control_input.esc_rpm[3] = PosDirectControl_input.esc_rpm[3];

	_pos_direct_control_input.accs[0] = PosDirectControl_input.accs[0];
	_pos_direct_control_input.accs[1] = PosDirectControl_input.accs[1];
	_pos_direct_control_input.accs[2] = PosDirectControl_input.accs[2];
	
	// Set in params for now..
	// _pos_direct_control_input.pos_sp[0] = _local_pos_sp.x;
	// _pos_direct_control_input.pos_sp[1] = _local_pos_sp.y;
	// _pos_direct_control_input.pos_sp[2] = _local_pos_sp.z;

	_pos_direct_control_input.yaw_sp = 0;

	// See mixer file `pass.main.mix` for exact control allocation.
	_actuators.control[0] = PosDirectControl.PosDirectControl_Y.actuators_control[0];
	_actuators.control[1] = PosDirectControl.PosDirectControl_Y.actuators_control[1];
	_actuators.control[2] = PosDirectControl.PosDirectControl_Y.actuators_control[2];
	_actuators.control[3] = PosDirectControl.PosDirectControl_Y.actuators_control[3];

}

void
SlPosDirectControl::run()
{
	/*
	 * do subscriptions
	 */
	_v_att_sub = orb_subscribe(ORB_ID(vehicle_attitude));
	_v_control_mode_sub = orb_subscribe(ORB_ID(vehicle_control_mode));
	_params_sub = orb_subscribe(ORB_ID(parameter_update));
	_vehicle_status_sub = orb_subscribe(ORB_ID(vehicle_status));
	_local_pos_sp_sub = orb_subscribe(ORB_ID(vehicle_local_position_setpoint));

	_esc_status_sub = orb_subscribe(ORB_ID(esc_status));
	_ev_odom_sub	= orb_subscribe(ORB_ID(vehicle_visual_odometry));
	_gyro_count = math::min(orb_group_count(ORB_ID(sensor_gyro)), MAX_GYRO_COUNT);

	if (_gyro_count == 0) {
		_gyro_count = 1;
	}

	for (unsigned s = 0; s < _gyro_count; s++) {
		_sensor_gyro_sub[s] = orb_subscribe_multi(ORB_ID(sensor_gyro), s);
	}

	_sensor_correction_sub = orb_subscribe(ORB_ID(sensor_correction));
	_sensor_bias_sub = orb_subscribe(ORB_ID(sensor_bias));
	_sensor_combined_sub = orb_subscribe(ORB_ID(sensor_combined));
	_vehicle_local_position_sub = orb_subscribe(ORB_ID(vehicle_local_position));

	/* wakeup source: gyro data from sensor selected by the sensor app */
	px4_pollfd_struct_t poll_fds = {};
	poll_fds.events = POLLIN;

	const hrt_abstime task_start = hrt_absolute_time();
	hrt_abstime last_run = task_start;
	float dt_log_accumulator = 0.f;

	while (!should_exit()) {

		poll_fds.fd = _sensor_gyro_sub[_selected_gyro];

		/* wait for up to 100ms for data */
		int pret = px4_poll(&poll_fds, 1, 100);

		/* timed out - periodic check for should_exit() */
		if (pret == 0) {
			continue;
		}

		/* this is undesirable but not much we can do - might want to flag unhappy status */
		if (pret < 0) {
			PX4_ERR("poll error %d, %d", pret, errno);
			/* sleep a bit before next try */
			px4_usleep(100000);
			continue;
		}

		perf_begin(_loop_perf);

		const hrt_abstime now = hrt_absolute_time();
		float dt = (now - last_run) / 1e6f;

		float dt_min = 1.0f / _sample_rate_max;

		if (dt < dt_min) {
			continue;
		}

		/* run controller on gyro changes */
		if (poll_fds.revents & POLLIN) {

			last_run = now;

			/* guard against too small (< 0.2ms) and too large (> 20ms) dt's */
			if (dt < 0.0002f) {
				dt = 0.0002f;

			} else if (dt > 0.02f) {
				dt = 0.02f;
			}

			if (dt_log_accumulator > 0.1f) {
				dbg.value = 1/dt;
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

			esc_status_poll();
			odometry_status_poll();

			control_pos_direct(dt);

			_actuators.timestamp = hrt_absolute_time();
			_actuators.timestamp_sample = _sensor_gyro.timestamp;

			if (!_actuators_0_circuit_breaker_enabled) {
				if (_actuators_0_pub != nullptr) {
					orb_publish(ORB_ID(actuator_controls_0), _actuators_0_pub, &_actuators);
				} else {
					_actuators_0_pub = orb_advertise(ORB_ID(actuator_controls_0), &_actuators);
				}

			}
			/* publish controller input */
			orb_publish(ORB_ID(pos_direct_control_input), pub_pos_direct_control_input, &_pos_direct_control_input);
		}

		perf_end(_loop_perf);
	}

	orb_unsubscribe(_v_att_sub);
	orb_unsubscribe(_v_control_mode_sub);
	orb_unsubscribe(_params_sub);
	orb_unsubscribe(_vehicle_status_sub);

	for (unsigned s = 0; s < _gyro_count; s++) {
		orb_unsubscribe(_sensor_gyro_sub[s]);
	}

	orb_unsubscribe(_sensor_correction_sub);
	orb_unsubscribe(_sensor_bias_sub);
	orb_unsubscribe(_sensor_combined_sub);
	orb_unsubscribe(_vehicle_local_position_sub);
	orb_unsubscribe(_local_pos_sp_sub);

	orb_unsubscribe(_esc_status_sub);
	orb_unsubscribe(_ev_odom_sub);
	
	PosDirectControl.terminate();
}

int 
SlPosDirectControl::task_spawn(int argc, char *argv[])
{
	_task_id = px4_task_spawn_cmd("sl_pos_direct_control",
					   SCHED_DEFAULT,
					   SCHED_PRIORITY_ATTITUDE_CONTROL,
					   1700,
					   (px4_main_t)&run_trampoline,
					   (char *const *)argv);

	if (_task_id < 0) {
		_task_id = -1;
		return -errno;
	}

	return 0;
}

SlPosDirectControl *SlPosDirectControl::instantiate(int argc, char *argv[])
{
	return new SlPosDirectControl();
}

int 
SlPosDirectControl::custom_command(int argc, char *argv[])
{
	return print_usage("unknown command");
}

int 
sl_pos_direct_control_main(int argc, char *argv[])
{
	return SlPosDirectControl::main(argc, argv);
}
