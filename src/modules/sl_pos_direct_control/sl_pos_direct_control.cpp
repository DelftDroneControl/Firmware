/****************************************************************************
 *
 *   Copyright (c) 2012-2016 PX4 Development Team. All rights reserved.
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
 * TODO:
 * - remove land detector topic
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

	_vehicle_status.is_rotary_wing = true;

	/* initialize quaternions in messages to be valid */
	_v_att.q[0] = 1.f;
	_v_att_sp.q_d[0] = 1.f;

	_rates_prev.zero();
	_att_control_prev.zero();
	_rates_sp.zero();
	_rates_int.zero();
	_thrust_sp = 0.0f;
	_att_control.zero();

	/* initialize thermal corrections as we might not immediately get a topic update (only non-zero values) */
	for (unsigned i = 0; i < 3; i++) {
		// used scale factors to unity
		_sensor_correction.gyro_scale_0[i] = 1.0f;
		_sensor_correction.gyro_scale_1[i] = 1.0f;
		_sensor_correction.gyro_scale_2[i] = 1.0f;
	}

	parameters_updated();

	// /* advertise debug value */
	strncpy(dbg.key, "att_dt", 10);
	pub_dbg = orb_advertise(ORB_ID(debug_key_value), &dbg);
	
	PX4_INFO("DEBUG LOG INIT");

	pub_rate_control_input = orb_advertise(ORB_ID(rate_control_input), &_rate_control_input);
}

void
SlPosDirectControl::parameters_updated()
{
	
	/* Store some of the parameters in a more convenient way & precompute often-used values */

	/* roll gains */
	_attitude_p(0) = _roll_p.get();
	_rate_p(0) = _roll_rate_p.get();
	_rate_i(0) = _roll_rate_i.get();
	_rate_int_lim(0) = _roll_rate_integ_lim.get();
	_rate_d(0) = _roll_rate_d.get();
	_rate_ff(0) = _roll_rate_ff.get();

	/* pitch gains */
	_attitude_p(1) = _pitch_p.get();
	_rate_p(1) = _pitch_rate_p.get();
	_rate_i(1) = _pitch_rate_i.get();
	_rate_int_lim(1) = _pitch_rate_integ_lim.get();
	_rate_d(1) = _pitch_rate_d.get();
	_rate_ff(1) = _pitch_rate_ff.get();

	/* yaw gains */
	_attitude_p(2) = _yaw_p.get();
	_rate_p(2) = _yaw_rate_p.get();
	_rate_i(2) = _yaw_rate_i.get();
	_rate_int_lim(2) = _yaw_rate_integ_lim.get();
	_rate_d(2) = _yaw_rate_d.get();
	_rate_ff(2) = _yaw_rate_ff.get();

	/* angular rate limits */
	_mc_rate_max(0) = math::radians(_roll_rate_max.get());
	_mc_rate_max(1) = math::radians(_pitch_rate_max.get());
	_mc_rate_max(2) = math::radians(_yaw_rate_max.get());

	/* auto angular rate limits */
	_auto_rate_max(0) = math::radians(_roll_rate_max.get());
	_auto_rate_max(1) = math::radians(_pitch_rate_max.get());
	_auto_rate_max(2) = math::radians(_yaw_auto_max.get());

	/* manual rate control acro mode rate limits and expo */
	_acro_rate_max(0) = math::radians(_acro_roll_max.get());
	_acro_rate_max(1) = math::radians(_acro_pitch_max.get());
	_acro_rate_max(2) = math::radians(_acro_yaw_max.get());

	_actuators_0_circuit_breaker_enabled = circuit_breaker_enabled("CBRK_RATE_CTRL", CBRK_RATE_CTRL_KEY);

	/* get transformation matrix from sensor/board to body frame */
	_board_rotation = get_rot_matrix((enum Rotation)_board_rotation_param.get());

	/* fine tune the rotation */
	Dcmf board_rotation_offset(Eulerf(
			M_DEG_TO_RAD_F * _board_offset_x.get(),
			M_DEG_TO_RAD_F * _board_offset_y.get(),
			M_DEG_TO_RAD_F * _board_offset_z.get()));
	_board_rotation = board_rotation_offset * _board_rotation;

	_sample_rate_max = _att_rate_sample_rate_max.get();

	// TODO : update the parameters for PosDirectControl

	// PosDirectControlParams.roll_gain = _att_roll_gain.get();
	// PosDirectControlParams.pitch_gain = _att_pitch_gain.get();
	// PosDirectControlParams.yaw_gain = _att_yaw_gain.get();

	// PosDirectControlParams.roll_eff = _att_roll_eff.get();
	// PosDirectControlParams.pitch_eff = _att_pitch_eff.get();
	// PosDirectControlParams.yaw_eff = _att_yaw_eff.get();
	// PosDirectControlParams.yaw_d_eff = _att_yaw_d_eff.get();
	// PosDirectControlParams.az_eff = _att_az_eff.get();

	// PosDirectControlParams.t_act = _att_t_act.get();

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
SlPosDirectControl::vehicle_manual_poll()
{
	bool updated;

	/* get pilots inputs */
	orb_check(_manual_control_sp_sub, &updated);

	if (updated) {
		orb_copy(ORB_ID(manual_control_setpoint), _manual_control_sp_sub, &_manual_control_sp);
	}
}

void
SlPosDirectControl::vehicle_attitude_setpoint_poll()
{
	/* check if there is a new setpoint */
	bool updated;
	orb_check(_v_att_sp_sub, &updated);

	if (updated) {
		orb_copy(ORB_ID(vehicle_attitude_setpoint), _v_att_sp_sub, &_v_att_sp);
	}
}

void
SlPosDirectControl::vehicle_rates_setpoint_poll()
{
	/* check if there is a new setpoint */
	bool updated;
	orb_check(_v_rates_sp_sub, &updated);

	if (updated) {
		orb_copy(ORB_ID(vehicle_rates_setpoint), _v_rates_sp_sub, &_v_rates_sp);
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

		/* set correct uORB ID, depending on if vehicle is VTOL or not */
		if (_rates_sp_id == nullptr) {
			if (_vehicle_status.is_vtol) {
				_rates_sp_id = ORB_ID(mc_virtual_rates_setpoint);
				_actuators_id = ORB_ID(actuator_controls_virtual_mc);

			} else {
				_rates_sp_id = ORB_ID(vehicle_rates_setpoint);
				_actuators_id = ORB_ID(actuator_controls_0);
			}
		}
	}
}

void
SlPosDirectControl::vehicle_motor_limits_poll()
{
	/* check if there is a new message */
	bool updated;
	orb_check(_motor_limits_sub, &updated);

	if (updated) {
		multirotor_motor_limits_s motor_limits = {};
		orb_copy(ORB_ID(multirotor_motor_limits), _motor_limits_sub, &motor_limits);

		_saturation_status.value = motor_limits.saturation_status;
	}
}

void
SlPosDirectControl::battery_status_poll()
{
	/* check if there is a new message */
	bool updated;
	orb_check(_battery_status_sub, &updated);

	if (updated) {
		orb_copy(ORB_ID(battery_status), _battery_status_sub, &_battery_status);
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
SlPosDirectControl::vehicle_land_detected_poll()
{
	/* check if there is a new message */
	bool updated;
	orb_check(_vehicle_land_detected_sub, &updated);

	if (updated) {
		orb_copy(ORB_ID(vehicle_land_detected), _vehicle_land_detected_sub, &_vehicle_land_detected);
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


/*
 * Position controller.
 * Input: 
 * Output: 'actuator_controls'
 */
void
SlPosDirectControl::control_pos_direct(float dt)
{

	/* reset integral if disarmed */
	if (!_v_control_mode.flag_armed || !_vehicle_status.is_rotary_wing) {
		// _rates_int.zero();
		_att_control.zero();
	}

	// get the raw gyro data and correct for thermal errors
	Vector3f rates;

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

	/* get estimated and desired vehicle attitude */
	Quatf q(_v_att.q);
	Quatf qd(_v_att_sp.q_d);

	/* ensure input quaternions are exactly normalized because acosf(1.00001) == NaN */
	q.normalize();
	qd.normalize();

	ExtU_PosDirectControl_T PosDirectControl_input;

	PosDirectControl_input.vel[0] = _vehicle_local_position.vx;
	PosDirectControl_input.vel[1] = _vehicle_local_position.vy;
	PosDirectControl_input.vel[2] = _vehicle_local_position.vz;

	PosDirectControl_input.pos[0] = _vehicle_local_position.x;
	PosDirectControl_input.pos[1] = _vehicle_local_position.y;
	PosDirectControl_input.pos[2] = _vehicle_local_position.z;

	PosDirectControl_input.rates[0] = rates(0);
	PosDirectControl_input.rates[1] = rates(1);
	PosDirectControl_input.rates[2] = rates(2);

	PosDirectControl_input.q[0] = q(3); // w
	PosDirectControl_input.q[1] = q(0); // x
	PosDirectControl_input.q[2] = q(1); // y
	PosDirectControl_input.q[3] = q(2); // z

	PosDirectControl_input.pos_sp[0] = _local_pos_sp.x;
	PosDirectControl_input.pos_sp[1] = _local_pos_sp.y;
	PosDirectControl_input.pos_sp[2] = _local_pos_sp.z;

	PosDirectControl_input.yaw_sp = 0.f;

	PosDirectControl.PosDirectControl_U = PosDirectControl_input;

	// float t_step_start = hrt_absolute_time();
	
	PosDirectControl.step();

	// `rate_control_input` logger

	// _rate_control_input.timestamp = hrt_absolute_time();
	// _rate_control_input.rates[0] = // PosDirectControl_input.rates[0];
	// _rate_control_input.rates[1] = // PosDirectControl_input.rates[1];
	// _rate_control_input.rates[2] = // PosDirectControl_input.rates[2];

	// _rate_control_input.rates_sp[0] = // PosDirectControl_input.rates_sp[0];
	// _rate_control_input.rates_sp[1] = // PosDirectControl_input.rates_sp[1];
	// _rate_control_input.rates_sp[2] = // PosDirectControl_input.rates_sp[2];

	// _rate_control_input.thrust_sp = // PosDirectControl_input.thrust_sp;

	// _rate_control_input.accel_z = // PosDirectControl_input.accel_z;

	// _rate_control_input.dt_step = hrt_absolute_time() - t_step_start;

	// See mixer file `pass.main.mix` for exact control allocation.
	_actuators.control[0] = PosDirectControl.PosDirectControl_Y.actuators_control[0];
	_actuators.control[1] = PosDirectControl.PosDirectControl_Y.actuators_control[1];
	_actuators.control[2] = PosDirectControl.PosDirectControl_Y.actuators_control[2];
	_actuators.control[3] = PosDirectControl.PosDirectControl_Y.actuators_control[3];


	// PX4_INFO("HI");
	// See mixer file `pass.main.mix` for exact control allocation.
	// _actuators.control[0] = 0.f;
	// _actuators.control[1] = -1.f;
	// _actuators.control[2] = -1.f;
	// _actuators.control[3] = 1.f;

}

void
SlPosDirectControl::run()
{
	/*
	 * do subscriptions
	 */
	_v_att_sub = orb_subscribe(ORB_ID(vehicle_attitude));
	_v_att_sp_sub = orb_subscribe(ORB_ID(vehicle_attitude_setpoint));
	_v_rates_sp_sub = orb_subscribe(ORB_ID(vehicle_rates_setpoint));
	_v_control_mode_sub = orb_subscribe(ORB_ID(vehicle_control_mode));
	_params_sub = orb_subscribe(ORB_ID(parameter_update));
	_manual_control_sp_sub = orb_subscribe(ORB_ID(manual_control_setpoint));
	_vehicle_status_sub = orb_subscribe(ORB_ID(vehicle_status));
	_motor_limits_sub = orb_subscribe(ORB_ID(multirotor_motor_limits));
	_battery_status_sub = orb_subscribe(ORB_ID(battery_status));
	_local_pos_sp_sub         = orb_subscribe(ORB_ID(vehicle_local_position_setpoint));

	_gyro_count = math::min(orb_group_count(ORB_ID(sensor_gyro)), MAX_GYRO_COUNT);

	if (_gyro_count == 0) {
		_gyro_count = 1;
	}

	for (unsigned s = 0; s < _gyro_count; s++) {
		_sensor_gyro_sub[s] = orb_subscribe_multi(ORB_ID(sensor_gyro), s);
	}

	_sensor_correction_sub = orb_subscribe(ORB_ID(sensor_correction));
	_sensor_bias_sub = orb_subscribe(ORB_ID(sensor_bias));
	_vehicle_land_detected_sub = orb_subscribe(ORB_ID(vehicle_land_detected));
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
			usleep(100000);
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

			// /* guard against too small (< 2ms) and too large (> 20ms) dt's */
			// if (dt < 0.002f) {
			// 	dt = 0.002f;

			// } else if (dt > 0.02f) {
			// 	dt = 0.02f;
			// }

			if (dt_log_accumulator > 0.1f) {
				dbg.value = 1/dt;
				orb_publish(ORB_ID(debug_key_value), pub_dbg, &dbg);
				// PX4_INFO("ATT_DT: %f", dbg.value);
				dt_log_accumulator = 0;
			}

			dt_log_accumulator += dt;

			/* copy gyro data */
			orb_copy(ORB_ID(sensor_gyro), _sensor_gyro_sub[_selected_gyro], &_sensor_gyro);

			/* check for updates in other topics */
			parameter_update_poll();
			vehicle_control_mode_poll();
			vehicle_manual_poll();
			vehicle_status_poll();
			vehicle_motor_limits_poll();
			battery_status_poll();
			vehicle_attitude_poll();
			sensor_correction_poll();
			sensor_bias_poll();
			vehicle_land_detected_poll();
			sensor_combined_poll();
			vehicle_local_position_poll();
			vehicle_local_pos_sp_poll();

			control_pos_direct(dt);

			_actuators.control[7] = _v_att_sp.landing_gear;
			_actuators.timestamp = hrt_absolute_time();
			_actuators.timestamp_sample = _sensor_gyro.timestamp;

			if (!_actuators_0_circuit_breaker_enabled) {
				if (_actuators_0_pub != nullptr) {

					orb_publish(_actuators_id, _actuators_0_pub, &_actuators);

				} else if (_actuators_id) {
					_actuators_0_pub = orb_advertise(_actuators_id, &_actuators);
				}

			}
		}

		perf_end(_loop_perf);
	}

	orb_unsubscribe(_v_att_sub);
	orb_unsubscribe(_v_att_sp_sub);
	orb_unsubscribe(_v_rates_sp_sub);
	orb_unsubscribe(_v_control_mode_sub);
	orb_unsubscribe(_params_sub);
	orb_unsubscribe(_manual_control_sp_sub);
	orb_unsubscribe(_vehicle_status_sub);
	orb_unsubscribe(_motor_limits_sub);
	orb_unsubscribe(_battery_status_sub);

	for (unsigned s = 0; s < _gyro_count; s++) {
		orb_unsubscribe(_sensor_gyro_sub[s]);
	}

	orb_unsubscribe(_sensor_correction_sub);
	orb_unsubscribe(_sensor_bias_sub);
	orb_unsubscribe(_vehicle_land_detected_sub);
	orb_unsubscribe(_sensor_combined_sub);
	orb_unsubscribe(_vehicle_local_position_sub);
	orb_unsubscribe(_local_pos_sp_sub);

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
