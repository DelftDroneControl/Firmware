/****************************************************************************
 *
 *   Copyright (c) 2013-2018 PX4 Development Team. All rights reserved.
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
 * @file sl_control_main.cpp
 * Multicopter attitude controller.
 *
 * @author Lorenz Meier		<lorenz@px4.io>
 * @author Anton Babushkin	<anton.babushkin@me.com>
 * @author Sander Smeets	<sander@droneslab.com>
 * @author Matthias Grob	<maetugr@gmail.com>
 * @author Beat Küng		<beat-kueng@gmx.net>
 *
 */

#include "sl_control.hpp"

#include <conversion/rotation.h>
#include <drivers/drv_hrt.h>
#include <lib/ecl/geo/geo.h>
#include <circuit_breaker/circuit_breaker.h>
#include <mathlib/math/Limits.hpp>
#include <mathlib/math/Functions.hpp>

#include "RateControl/RateControl.h"
#include "AttitudeControl/AttitudeControl.h"

#define TPA_RATE_LOWER_LIMIT 0.05f

#define AXIS_INDEX_ROLL 0
#define AXIS_INDEX_PITCH 1
#define AXIS_INDEX_YAW 2
#define AXIS_COUNT 3

using namespace matrix;

RateControlModelClass RateControl;
AttitudeControlModelClass AttitudeControl;


int SimulinkControl::print_usage(const char *reason)
{
	if (reason) {
		PX4_WARN("%s\n", reason);
	}

	PRINT_MODULE_DESCRIPTION(
		R"DESCR_STR(
### Description
This implements the multicopter attitude and rate controller. It takes attitude
setpoints (`vehicle_attitude_setpoint`) or rate setpoints (in acro mode
via `manual_control_setpoint` topic) as inputs and outputs actuator control messages.

The controller has two loops: a P loop for angular error and a PID loop for angular rate error.

Publication documenting the implemented Quaternion Attitude Control:
Nonlinear Quadrocopter Attitude Control (2013)
by Dario Brescianini, Markus Hehn and Raffaello D'Andrea
Institute for Dynamic Systems and Control (IDSC), ETH Zurich

https://www.research-collection.ethz.ch/bitstream/handle/20.500.11850/154099/eth-7387-01.pdf

### Implementation
To reduce control latency, the module directly polls on the gyro topic published by the IMU driver.

)DESCR_STR");

	PRINT_MODULE_USAGE_NAME("sl_control", "controller");
	PRINT_MODULE_USAGE_COMMAND("start");
	PRINT_MODULE_USAGE_DEFAULT_COMMANDS();

	return 0;
}

SimulinkControl::SimulinkControl() :
	ModuleParams(nullptr),
	_loop_perf(perf_alloc(PC_ELAPSED, "sl_control"))
{
	for (uint8_t i = 0; i < MAX_GYRO_COUNT; i++) {
		_sensor_gyro_sub[i] = -1;
	}

	_vehicle_status.is_rotary_wing = true;

	/* initialize quaternions in messages to be valid */
	_v_att.q[0] = 1.f;
	_vision.q[0] = 1.f;

	_v_att_sp.q_d[0] = 1.f;

	_rates_prev.zero();
	_rates_prev_filtered.zero();
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

	RateControl.initialize();
	AttitudeControl.initialize();


	// /* advertise debug value */
	strncpy(dbg.key, "att_dt", 10);
	pub_dbg = orb_advertise(ORB_ID(debug_key_value), &dbg);
	
	pub_rate_control_input = orb_advertise(ORB_ID(rate_control_input), &_rate_control_input);
	pub_attitude_control_input = orb_advertise(ORB_ID(attitude_control_input), &_attitude_control_input);

	PX4_INFO("Initialized");
}

void
SimulinkControl::parameters_updated()
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

	if (fabsf(_lp_filters_d.get_cutoff_freq() - _d_term_cutoff_freq.get()) > 0.01f) {
		_lp_filters_d.set_cutoff_frequency(_loop_update_rate_hz, _d_term_cutoff_freq.get());
		_lp_filters_d.reset(_rates_prev);
	}

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

	_man_tilt_max = math::radians(_man_tilt_max_deg.get());

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

	_yaw_rate_sp = _sl_yaw_rate_sp.get();

	// AttitudeControl
	AttitudeControlParams.prim_axis_x = _prim_axis_x.get();
	AttitudeControlParams.prim_axis_y = _prim_axis_y.get();
	AttitudeControlParams.xy_gain = _att_xy_gain.get();

	// RateControl
	RateControlParams.roll_gain = _att_roll_gain.get();
	RateControlParams.pitch_gain = _att_pitch_gain.get();
	RateControlParams.yaw_gain = _att_yaw_gain.get();

	RateControlParams.roll_eff = _att_roll_eff.get();
	RateControlParams.pitch_eff = _att_pitch_eff.get();
	RateControlParams.yaw_eff = _att_yaw_eff.get();
	RateControlParams.yaw_d_eff = _att_yaw_d_eff.get();
	RateControlParams.az_eff = _att_az_eff.get();

	RateControlParams.t_act = _att_t_act.get();

	// Actuator failure
	RateControl.RateControl_U.fail_flag = _sl_fail_flag.get();
	RateControl.RateControl_U.act_limit = _act_limit.get();
	RateControlParams.fail_id = _sl_fail_id.get();

	PX4_INFO("Parameters updated");
	PX4_INFO("Actuator limit: %f", static_cast<double>(RateControl.RateControl_U.act_limit));

}

void
SimulinkControl::parameter_update_poll()
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
SimulinkControl::vehicle_control_mode_poll()
{
	bool updated;

	/* Check if vehicle control mode has changed */
	orb_check(_v_control_mode_sub, &updated);

	if (updated) {
		orb_copy(ORB_ID(vehicle_control_mode), _v_control_mode_sub, &_v_control_mode);
	}
}

bool
SimulinkControl::vehicle_manual_poll()
{
	bool updated;

	/* get pilots inputs */
	orb_check(_manual_control_sp_sub, &updated);

	if (updated) {
		orb_copy(ORB_ID(manual_control_setpoint), _manual_control_sp_sub, &_manual_control_sp);
		return true;
	}
	return false;
}

void
SimulinkControl::vehicle_attitude_setpoint_poll()
{
	/* check if there is a new setpoint */
	bool updated;
	orb_check(_v_att_sp_sub, &updated);

	if (updated) {
		orb_copy(ORB_ID(vehicle_attitude_setpoint), _v_att_sp_sub, &_v_att_sp);
	}
}

bool
SimulinkControl::vehicle_rates_setpoint_poll()
{
	/* check if there is a new setpoint */
	bool updated;
	orb_check(_v_rates_sp_sub, &updated);

	if (updated) {
		orb_copy(ORB_ID(vehicle_rates_setpoint), _v_rates_sp_sub, &_v_rates_sp);
		return true;
	}
	return false;
}

void
SimulinkControl::vehicle_status_poll()
{
	/* check if there is new status information */
	bool vehicle_status_updated;
	orb_check(_vehicle_status_sub, &vehicle_status_updated);

	if (vehicle_status_updated) {
		orb_copy(ORB_ID(vehicle_status), _vehicle_status_sub, &_vehicle_status);

		/* set correct uORB ID, depending on if vehicle is VTOL or not */
		if (_actuators_id == nullptr) {
			if (_vehicle_status.is_vtol) {
				_actuators_id = ORB_ID(actuator_controls_virtual_mc);

			} else {
				_actuators_id = ORB_ID(actuator_controls_0);
			}
		}
	}
}

void
SimulinkControl::vehicle_motor_limits_poll()
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
SimulinkControl::battery_status_poll()
{
	/* check if there is a new message */
	bool updated;
	orb_check(_battery_status_sub, &updated);

	if (updated) {
		orb_copy(ORB_ID(battery_status), _battery_status_sub, &_battery_status);
	}
}

bool
SimulinkControl::vehicle_attitude_poll()
{
	/* check if there is a new message */
	bool updated;
	orb_check(_v_att_sub, &updated);

	if (updated) {
		uint8_t prev_quat_reset_counter = _v_att.quat_reset_counter;

		orb_copy(ORB_ID(vehicle_attitude), _v_att_sub, &_v_att);

		// Check for a heading reset
		if (prev_quat_reset_counter != _v_att.quat_reset_counter) {
			// we only extract the heading change from the delta quaternion
			_man_yaw_sp += Eulerf(Quatf(_v_att.delta_q_reset)).psi();
		}
		return true;
	}
	return false;
}

void
SimulinkControl::sensor_correction_poll()
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
SimulinkControl::sensor_bias_poll()
{
	/* check if there is a new message */
	bool updated;
	orb_check(_sensor_bias_sub, &updated);

	if (updated) {
		orb_copy(ORB_ID(sensor_bias), _sensor_bias_sub, &_sensor_bias);
	}

}

void
SimulinkControl::vehicle_land_detected_poll()
{
	/* check if there is a new message */
	bool updated;
	orb_check(_vehicle_land_detected_sub, &updated);

	if (updated) {
		orb_copy(ORB_ID(vehicle_land_detected), _vehicle_land_detected_sub, &_vehicle_land_detected);
	}

}

void
SimulinkControl::landing_gear_state_poll()
{
	bool updated;
	orb_check(_landing_gear_sub, &updated);

	if (updated) {
		orb_copy(ORB_ID(landing_gear), _landing_gear_sub, &_landing_gear);
	}
}


void
SimulinkControl::sensor_combined_poll()
{
	/* check if there is a new message */
	bool updated;
	orb_check(_sensor_combined_sub, &updated);

	if (updated) {
		orb_copy(ORB_ID(sensor_combined), _sensor_combined_sub, &_sensor_combined);
	}

}

void
SimulinkControl::esc_status_poll()
{
	/* check if there is a new message */
	bool updated;
	orb_check(_esc_status_sub, &updated);

	if (updated) {
		orb_copy(ORB_ID(esc_status), _esc_status_sub, &_esc_status);
	}

}


bool
SimulinkControl::vision_poll()
{
	/* check if there is a new message */
	bool updated;
	orb_check(_vision_sub, &updated);

	if (updated) {
		orb_copy(ORB_ID(vehicle_visual_odometry), _vision_sub, &_vision);
		// PX4_INFO("%f, %f, %f, %f", static_cast<double>(_vision.q[0]), static_cast<double>(_vision.q[1]), static_cast<double>(_vision.q[2]), static_cast<double>(_vision.q[3]));
		return true;
	}
	return false;
}


// void
// SimulinkControl::has_upset_condition(float[3] att, float )
// {


// }



float
SimulinkControl::throttle_curve(float throttle_stick_input)
{
	// throttle_stick_input is in range [0, 1]
	switch (_throttle_curve.get()) {
	case 1: // no rescaling to hover throttle
		return _man_throttle_min.get() + throttle_stick_input * (_throttle_max.get() - _man_throttle_min.get());

	default: // 0 or other: rescale to hover throttle at 0.5 stick
		if (throttle_stick_input < 0.5f) {
			return (_throttle_hover.get() - _man_throttle_min.get()) / 0.5f * throttle_stick_input + _man_throttle_min.get();

		} else {
			return (_throttle_max.get() - _throttle_hover.get()) / 0.5f * (throttle_stick_input - 1.0f) + _throttle_max.get();
		}
	}
}

float
SimulinkControl::get_landing_gear_state()
{
	// Only switch the landing gear up if we are not landed and if
	// the user switched from gear down to gear up.
	// If the user had the switch in the gear up position and took off ignore it
	// until he toggles the switch to avoid retracting the gear immediately on takeoff.
	if (_vehicle_land_detected.landed) {
		_gear_state_initialized = false;
	}
	float landing_gear = landing_gear_s::GEAR_DOWN; // default to down
	if (_manual_control_sp.gear_switch == manual_control_setpoint_s::SWITCH_POS_ON && _gear_state_initialized) {
		landing_gear = landing_gear_s::GEAR_UP;

	} else if (_manual_control_sp.gear_switch == manual_control_setpoint_s::SWITCH_POS_OFF) {
		// Switching the gear off does put it into a safe defined state
		_gear_state_initialized = true;
	}

	return landing_gear;
}

void
SimulinkControl::generate_attitude_setpoint(float dt, bool reset_yaw_sp)
{
	vehicle_attitude_setpoint_s attitude_setpoint{};
	landing_gear_s landing_gear{};
	const float yaw = Eulerf(Quatf(_v_att.q)).psi();

	/* reset yaw setpoint to current position if needed */
	if (reset_yaw_sp) {
		_man_yaw_sp = yaw;

	} else if (_manual_control_sp.z > 0.05f || _airmode.get() == (int32_t)Mixer::Airmode::roll_pitch_yaw) {

		const float yaw_rate = math::radians(_yaw_rate_scaling.get());
		attitude_setpoint.yaw_sp_move_rate = _manual_control_sp.r * yaw_rate;
		_man_yaw_sp = wrap_pi(_man_yaw_sp + attitude_setpoint.yaw_sp_move_rate * dt);
	}

	/*
	 * Input mapping for roll & pitch setpoints
	 * ----------------------------------------
	 * We control the following 2 angles:
	 * - tilt angle, given by sqrt(x*x + y*y)
	 * - the direction of the maximum tilt in the XY-plane, which also defines the direction of the motion
	 *
	 * This allows a simple limitation of the tilt angle, the vehicle flies towards the direction that the stick
	 * points to, and changes of the stick input are linear.
	 */
	const float x = _manual_control_sp.x * _man_tilt_max;
	const float y = _manual_control_sp.y * _man_tilt_max;

	// we want to fly towards the direction of (x, y), so we use a perpendicular axis angle vector in the XY-plane
	Vector2f v = Vector2f(y, -x);
	float v_norm = v.norm(); // the norm of v defines the tilt angle

	if (v_norm > _man_tilt_max) { // limit to the configured maximum tilt angle
		v *= _man_tilt_max / v_norm;
	}

	Quatf q_sp_rpy = AxisAnglef(v(0), v(1), 0.f);
	Eulerf euler_sp = q_sp_rpy;
	attitude_setpoint.roll_body = euler_sp(0);
	attitude_setpoint.pitch_body = euler_sp(1);
	// The axis angle can change the yaw as well (noticeable at higher tilt angles).
	// This is the formula by how much the yaw changes:
	//   let a := tilt angle, b := atan(y/x) (direction of maximum tilt)
	//   yaw = atan(-2 * sin(b) * cos(b) * sin^2(a/2) / (1 - 2 * cos^2(b) * sin^2(a/2))).
	attitude_setpoint.yaw_body = _man_yaw_sp + euler_sp(2);

	/* modify roll/pitch only if we're a VTOL */
	if (_vehicle_status.is_vtol) {
		// Construct attitude setpoint rotation matrix. Modify the setpoints for roll
		// and pitch such that they reflect the user's intention even if a large yaw error
		// (yaw_sp - yaw) is present. In the presence of a yaw error constructing a rotation matrix
		// from the pure euler angle setpoints will lead to unexpected attitude behaviour from
		// the user's view as the euler angle sequence uses the  yaw setpoint and not the current
		// heading of the vehicle.
		// However there's also a coupling effect that causes oscillations for fast roll/pitch changes
		// at higher tilt angles, so we want to avoid using this on multicopters.
		// The effect of that can be seen with:
		// - roll/pitch into one direction, keep it fixed (at high angle)
		// - apply a fast yaw rotation
		// - look at the roll and pitch angles: they should stay pretty much the same as when not yawing

		// calculate our current yaw error
		float yaw_error = wrap_pi(attitude_setpoint.yaw_body - yaw);

		// compute the vector obtained by rotating a z unit vector by the rotation
		// given by the roll and pitch commands of the user
		Vector3f zB = {0.0f, 0.0f, 1.0f};
		Dcmf R_sp_roll_pitch = Eulerf(attitude_setpoint.roll_body, attitude_setpoint.pitch_body, 0.0f);
		Vector3f z_roll_pitch_sp = R_sp_roll_pitch * zB;

		// transform the vector into a new frame which is rotated around the z axis
		// by the current yaw error. this vector defines the desired tilt when we look
		// into the direction of the desired heading
		Dcmf R_yaw_correction = Eulerf(0.0f, 0.0f, -yaw_error);
		z_roll_pitch_sp = R_yaw_correction * z_roll_pitch_sp;

		// use the formula z_roll_pitch_sp = R_tilt * [0;0;1]
		// R_tilt is computed from_euler; only true if cos(roll) not equal zero
		// -> valid if roll is not +-pi/2;
		attitude_setpoint.roll_body = -asinf(z_roll_pitch_sp(1));
		attitude_setpoint.pitch_body = atan2f(z_roll_pitch_sp(0), z_roll_pitch_sp(2));
	}

	/* copy quaternion setpoint to attitude setpoint topic */
	Quatf q_sp = Eulerf(attitude_setpoint.roll_body, attitude_setpoint.pitch_body, attitude_setpoint.yaw_body);
	q_sp.copyTo(attitude_setpoint.q_d);
	attitude_setpoint.q_d_valid = true;

	attitude_setpoint.thrust_body[2] = -throttle_curve(_manual_control_sp.z);

	_landing_gear.landing_gear = get_landing_gear_state();

	attitude_setpoint.timestamp = landing_gear.timestamp = hrt_absolute_time();
	orb_publish_auto(ORB_ID(vehicle_attitude_setpoint), &_vehicle_attitude_setpoint_pub, &attitude_setpoint, nullptr, ORB_PRIO_DEFAULT);
	orb_publish_auto(ORB_ID(landing_gear), &_landing_gear_pub, &attitude_setpoint, nullptr, ORB_PRIO_DEFAULT);
}

/**
 * Attitude controller.
 * Input: 'vehicle_attitude_setpoint' topics (depending on mode)
 * Output: '_rates_sp' vector, '_thrust_sp'
 */
void
SimulinkControl::control_attitude()
{
	vehicle_attitude_setpoint_poll();

	// // physical thrust axis is the negative of body z axis
	_thrust_sp = -_v_att_sp.thrust_body[2];

	// /* prepare yaw weight from the ratio between roll/pitch and yaw gains */
	Vector3f attitude_gain = _attitude_p;
	const float roll_pitch_gain = (attitude_gain(0) + attitude_gain(1)) / 2.f;
	const float yaw_w = math::constrain(attitude_gain(2) / roll_pitch_gain, 0.f, 1.f);
	attitude_gain(2) = roll_pitch_gain;

	// /* get estimated and desired vehicle attitude */
	Quatf q_v_att(_v_att.q);
	Quatf q(_vision.q);

	Quatf qd(_v_att_sp.q_d);

	/* ensure input quaternions are exactly normalized because acosf(1.00001) == NaN */
	q.normalize();
	qd.normalize();

	// /* calculate reduced desired attitude neglecting vehicle's yaw to prioritize roll and pitch */
	Vector3f e_z = q.dcm_z();
	Vector3f e_z_d = qd.dcm_z();
	Quatf qd_red(e_z, e_z_d);

	if (abs(qd_red(1)) > (1.f - 1e-5f) || abs(qd_red(2)) > (1.f - 1e-5f)) {
		/* In the infinitesimal corner case where the vehicle and thrust have the completely opposite direction,
		 * full attitude control anyways generates no yaw input and directly takes the combination of
		 * roll and pitch leading to the correct desired yaw. Ignoring this case would still be totally safe and stable. */
		qd_red = qd;

	} else {
		/* transform rotation from current to desired thrust vector into a world frame reduced desired attitude */
		qd_red *= q;
	}

	/* mix full and reduced desired attitude */
	Quatf q_mix = qd_red.inversed() * qd;
	q_mix *= math::signNoZero(q_mix(0));
	/* catch numerical problems with the domain of acosf and asinf */
	q_mix(0) = math::constrain(q_mix(0), -1.f, 1.f);
	q_mix(3) = math::constrain(q_mix(3), -1.f, 1.f);
	qd = qd_red * Quatf(cosf(yaw_w * acosf(q_mix(0))), 0, 0, sinf(yaw_w * asinf(q_mix(3))));

	// /* quaternion attitude control law, qe is rotation from q to qd */
	Quatf qe = q.inversed() * qd;

	// /* using sin(alpha/2) scaled rotation axis as attitude error (see quaternion definition by axis angle)
	//  * also taking care of the antipodal unit quaternion ambiguity */
	Vector3f eq = 2.f * math::signNoZero(qe(0)) * qe.imag();

	// /* calculate angular rates setpoint */
	_rates_sp = eq.emult(attitude_gain);

	// /* Feed forward the yaw setpoint rate.
	//  * yaw_sp_move_rate is the feed forward commanded rotation around the world z-axis,
	//  * but we need to apply it in the body frame (because _rates_sp is expressed in the body frame).
	//  * Therefore we infer the world z-axis (expressed in the body frame) by taking the last column of R.transposed (== q.inversed)
	//  * and multiply it by the yaw setpoint rate (yaw_sp_move_rate).
	//  * This yields a vector representing the commanded rotatation around the world z-axis expressed in the body frame
	//  * such that it can be added to the rates setpoint.
	//  */
	_rates_sp += q.inversed().dcm_z() * _v_att_sp.yaw_sp_move_rate;

	ExtU_AttitudeControl_T attitudeControl_input;

	Eulerf eul_v_att(q_v_att); // from ekf2
	Eulerf att(q); // from external vision

	// Use ekf2 yaw output
	att(2) = eul_v_att(2);

	attitudeControl_input.att[0] = att(0);
	attitudeControl_input.att[1] = att(1);
	attitudeControl_input.att[2] = att(2);

	attitudeControl_input.rates[0] = _rates_prev(0);
	attitudeControl_input.rates[1] = _rates_prev(1);
	attitudeControl_input.rates[2] = _rates_prev(2);

	attitudeControl_input.thrust_vec_sp[0] = e_z_d(0);
	attitudeControl_input.thrust_vec_sp[1] = e_z_d(1);
	attitudeControl_input.thrust_vec_sp[2] = e_z_d(2);

	attitudeControl_input.yaw_angle_sp = 0;

	AttitudeControl.AttitudeControl_U = attitudeControl_input;

	AttitudeControl.step();

	_rates_sp(0) = AttitudeControl.AttitudeControl_Y.rates_sp[0];
	_rates_sp(1) = AttitudeControl.AttitudeControl_Y.rates_sp[1];
	// _rates_sp(2) = AttitudeControl.AttitudeControl_Y.rates_sp[2]; // use AttitudeControl yaw_rate_sp
	// _rates_sp(2) = _v_att_sp.yaw_sp_move_rate; // use PX4 yaw_rate_sp

	// TODO: make configurable
	_rates_sp(2) = _yaw_rate_sp; // use yaw_rate_sp from param

	_attitude_control_input.timestamp = hrt_absolute_time();

	_attitude_control_input.att[0] = attitudeControl_input.att[0];
	_attitude_control_input.att[1] = attitudeControl_input.att[1];
	_attitude_control_input.att[2] = attitudeControl_input.att[2];

	_attitude_control_input.rates[0] = attitudeControl_input.rates[0];
	_attitude_control_input.rates[1] = attitudeControl_input.rates[1];
	_attitude_control_input.rates[2] = attitudeControl_input.rates[2];

	_attitude_control_input.thrust_vec_sp[0] = attitudeControl_input.thrust_vec_sp[0];
	_attitude_control_input.thrust_vec_sp[1] = attitudeControl_input.thrust_vec_sp[1];
	_attitude_control_input.thrust_vec_sp[2] = attitudeControl_input.thrust_vec_sp[2];

	_attitude_control_input.yaw_angle_sp = attitudeControl_input.yaw_angle_sp;

	orb_publish(ORB_ID(attitude_control_input), pub_attitude_control_input, &_attitude_control_input);

	// /* limit rates */
	// for (int i = 0; i < 3; i++) {
	// 	if ((_v_control_mode.flag_control_velocity_enabled || _v_control_mode.flag_control_auto_enabled) &&
	// 	    !_v_control_mode.flag_control_manual_enabled) {
	// 		_rates_sp(i) = math::constrain(_rates_sp(i), -_auto_rate_max(i), _auto_rate_max(i));

	// 	} else {
	// 		_rates_sp(i) = math::constrain(_rates_sp(i), -_mc_rate_max(i), _mc_rate_max(i));
	// 	}
	// }
}

/*
 * Throttle PID attenuation
 * Function visualization available here https://www.desmos.com/calculator/gn4mfoddje
 * Input: 'tpa_breakpoint', 'tpa_rate', '_thrust_sp'
 * Output: 'pidAttenuationPerAxis' vector
 */
Vector3f
SimulinkControl::pid_attenuations(float tpa_breakpoint, float tpa_rate)
{
	/* throttle pid attenuation factor */
	float tpa = 1.0f - tpa_rate * (fabsf(_thrust_sp) - tpa_breakpoint) / (1.0f - tpa_breakpoint);
	tpa = fmaxf(TPA_RATE_LOWER_LIMIT, fminf(1.0f, tpa));

	Vector3f pidAttenuationPerAxis;
	pidAttenuationPerAxis(AXIS_INDEX_ROLL) = tpa;
	pidAttenuationPerAxis(AXIS_INDEX_PITCH) = tpa;
	pidAttenuationPerAxis(AXIS_INDEX_YAW) = 1.0;

	return pidAttenuationPerAxis;
}

/*
 * Attitude rates controller.
 * Input: '_rates_sp' vector, '_thrust_sp'
 * Output: '_att_control' vector
 */
void
SimulinkControl::control_attitude_rates(float dt)
{
	/* reset integral if disarmed */
	if (!_v_control_mode.flag_armed || !_vehicle_status.is_rotary_wing) {
		_rates_int.zero();
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

	// Save rates for attitude controller
	_rates_prev = rates;

	// correct for in-run bias errors
	rates(0) -= _sensor_bias.gyro_x_bias;
	rates(1) -= _sensor_bias.gyro_y_bias;
	rates(2) -= _sensor_bias.gyro_z_bias;

	ExtU_RateControl_T rateControl_input;

	rateControl_input.rates[0] = rates(0);
	rateControl_input.rates[1] = rates(1);
	rateControl_input.rates[2] = rates(2);

	rateControl_input.rates_sp[0] = _rates_sp(0);
	rateControl_input.rates_sp[1] = _rates_sp(1);
	rateControl_input.rates_sp[2] = _rates_sp(2);

	rateControl_input.accel_z =_sensor_combined.accelerometer_m_s2[2];

	rateControl_input.thrust_sp =_thrust_sp;

	// See pass.main.mix for esc mapping.
	rateControl_input.esc_rpm[0] = _esc_status.esc[2].esc_rpm;
	rateControl_input.esc_rpm[1] = _esc_status.esc[0].esc_rpm;
	rateControl_input.esc_rpm[2] = _esc_status.esc[3].esc_rpm;
	rateControl_input.esc_rpm[3] = _esc_status.esc[1].esc_rpm;

	RateControl.RateControl_U = rateControl_input;

	float t_step_start = hrt_absolute_time();
	
	RateControl.step();

	// `rate_control_input` logger
	_rate_control_input.timestamp = hrt_absolute_time();

	_rate_control_input.rates[0] = rateControl_input.rates[0];
	_rate_control_input.rates[1] = rateControl_input.rates[1];
	_rate_control_input.rates[2] = rateControl_input.rates[2];

	_rate_control_input.rates_sp[0] = rateControl_input.rates_sp[0];
	_rate_control_input.rates_sp[1] = rateControl_input.rates_sp[1];
	_rate_control_input.rates_sp[2] = rateControl_input.rates_sp[2];

	_rate_control_input.accel_z = rateControl_input.accel_z;

	_rate_control_input.thrust_sp = rateControl_input.thrust_sp;

	_rate_control_input.esc_rpm[0] = rateControl_input.esc_rpm[0];
	_rate_control_input.esc_rpm[1] = rateControl_input.esc_rpm[1];
	_rate_control_input.esc_rpm[2] = rateControl_input.esc_rpm[2];
	_rate_control_input.esc_rpm[3] = rateControl_input.esc_rpm[3];

	_rate_control_input.dt_step = hrt_absolute_time() - t_step_start;

	orb_publish(ORB_ID(rate_control_input), pub_rate_control_input, &_rate_control_input);

	// See mixer file `pass.main.mix` for control allocation.
	_actuators.control[0] = RateControl.RateControl_Y.actuators_control[0];
	_actuators.control[1] = RateControl.RateControl_Y.actuators_control[1];
	_actuators.control[2] = RateControl.RateControl_Y.actuators_control[2];
	_actuators.control[3] = RateControl.RateControl_Y.actuators_control[3];
}

void
SimulinkControl::publish_rates_setpoint()
{
	_v_rates_sp.roll = _rates_sp(0);
	_v_rates_sp.pitch = _rates_sp(1);
	_v_rates_sp.yaw = _rates_sp(2);
	_v_rates_sp.thrust_body[0] = 0.0f;
	_v_rates_sp.thrust_body[1] = 0.0f;
	_v_rates_sp.thrust_body[2] = -_thrust_sp;
	_v_rates_sp.timestamp = hrt_absolute_time();
	orb_publish_auto(ORB_ID(vehicle_rates_setpoint), &_v_rates_sp_pub, &_v_rates_sp, nullptr, ORB_PRIO_DEFAULT);
}

void
SimulinkControl::publish_rate_controller_status()
{
	rate_ctrl_status_s rate_ctrl_status;
	rate_ctrl_status.timestamp = hrt_absolute_time();
	rate_ctrl_status.rollspeed = _rates_prev(0);
	rate_ctrl_status.pitchspeed = _rates_prev(1);
	rate_ctrl_status.yawspeed = _rates_prev(2);
	rate_ctrl_status.rollspeed_integ = _rates_int(0);
	rate_ctrl_status.pitchspeed_integ = _rates_int(1);
	rate_ctrl_status.yawspeed_integ = _rates_int(2);
	orb_publish_auto(ORB_ID(rate_ctrl_status), &_controller_status_pub, &rate_ctrl_status, nullptr, ORB_PRIO_DEFAULT);
}

void
SimulinkControl::publish_actuator_controls()
{
	_actuators.timestamp = hrt_absolute_time();
	_actuators.timestamp_sample = _sensor_gyro.timestamp;

	if (!_actuators_0_circuit_breaker_enabled) {
		orb_publish_auto(_actuators_id, &_actuators_0_pub, &_actuators, nullptr, ORB_PRIO_DEFAULT);
	}
}

void
SimulinkControl::run()
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
	_landing_gear_sub = orb_subscribe(ORB_ID(landing_gear));

	_sensor_combined_sub = orb_subscribe(ORB_ID(sensor_combined));
	_esc_status_sub = orb_subscribe(ORB_ID(esc_status));
	_vision_sub = orb_subscribe(ORB_ID(vehicle_visual_odometry));


	/* wakeup source: gyro data from sensor selected by the sensor app */
	px4_pollfd_struct_t poll_fds = {};
	poll_fds.events = POLLIN;

	const hrt_abstime task_start = hrt_absolute_time();
	hrt_abstime last_run = task_start;
	float dt_accumulator = 0.f;
	int loop_counter = 0;

	bool reset_yaw_sp = true;
	float attitude_dt = 0.f;

	float dt_log_accumulator = 0.f;

	PX4_INFO("Running");


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

		/* run controller on gyro changes */
		if (poll_fds.revents & POLLIN) {
			const hrt_abstime now = hrt_absolute_time();
			float dt = (now - last_run) / 1e6f;

			float dt_min = 1.0f / _sample_rate_max;

			if (dt < dt_min) {
				continue;
			}

			last_run = now;

			if (dt_log_accumulator > 0.1f) {
				dbg.value = 1/dt;
				orb_publish(ORB_ID(debug_key_value), pub_dbg, &dbg);
				dt_log_accumulator = 0;
			}

			dt_log_accumulator += dt;

			/* copy gyro data */
			orb_copy(ORB_ID(sensor_gyro), _sensor_gyro_sub[_selected_gyro], &_sensor_gyro);

			esc_status_poll();
			const bool vision_updated = vision_poll();

			/* run the rate controller immediately after a gyro update */
			if (_v_control_mode.flag_control_rates_enabled) {
				control_attitude_rates(dt);

				publish_actuator_controls();
				publish_rate_controller_status();
			}

			/* check for updates in other topics */
			vehicle_control_mode_poll();
			vehicle_status_poll();
			vehicle_motor_limits_poll();
			battery_status_poll();
			sensor_correction_poll();
			sensor_bias_poll();
			vehicle_land_detected_poll();
			landing_gear_state_poll();
			const bool manual_control_updated = vehicle_manual_poll();
			const bool attitude_updated = vehicle_attitude_poll();

			sensor_combined_poll();

			attitude_dt += dt;

			/* Check if we are in rattitude mode and the pilot is above the threshold on pitch
			 * or roll (yaw can rotate 360 in normal att control). If both are true don't
			 * even bother running the attitude controllers */
			if (_v_control_mode.flag_control_rattitude_enabled) {
				_v_control_mode.flag_control_attitude_enabled =
						fabsf(_manual_control_sp.y) <= _rattitude_thres.get() &&
						fabsf(_manual_control_sp.x) <= _rattitude_thres.get();
			}

			bool attitude_setpoint_generated = false;

			if (_v_control_mode.flag_control_attitude_enabled && _vehicle_status.is_rotary_wing) {
				if (attitude_updated || vision_updated || true) {
					// Generate the attitude setpoint from stick inputs if we are in Manual/Stabilized mode
					if (_v_control_mode.flag_control_manual_enabled &&
							!_v_control_mode.flag_control_altitude_enabled &&
							!_v_control_mode.flag_control_velocity_enabled &&
							!_v_control_mode.flag_control_position_enabled) {
						generate_attitude_setpoint(attitude_dt, reset_yaw_sp);
						attitude_setpoint_generated = true;
					}

					control_attitude();
					publish_rates_setpoint();
				}

			} else {
				/* attitude controller disabled, poll rates setpoint topic */
				if (_v_control_mode.flag_control_manual_enabled && _vehicle_status.is_rotary_wing) {
					if (manual_control_updated) {
						/* manual rates control - ACRO mode */
						Vector3f man_rate_sp(
								math::superexpo(_manual_control_sp.y, _acro_expo_rp.get(), _acro_superexpo_rp.get()),
								math::superexpo(-_manual_control_sp.x, _acro_expo_rp.get(), _acro_superexpo_rp.get()),
								math::superexpo(_manual_control_sp.r, _acro_expo_y.get(), _acro_superexpo_y.get()));
						_rates_sp = man_rate_sp.emult(_acro_rate_max);
						_thrust_sp = _manual_control_sp.z;
						publish_rates_setpoint();
					}

				} else {
					/* attitude controller disabled, poll rates setpoint topic */
					if (vehicle_rates_setpoint_poll()) {
						_rates_sp(0) = _v_rates_sp.roll;
						_rates_sp(1) = _v_rates_sp.pitch;
						_rates_sp(2) = _v_rates_sp.yaw;
						_thrust_sp = -_v_rates_sp.thrust_body[2];
					}
				}
			}

			if (_v_control_mode.flag_control_termination_enabled) {
				if (!_vehicle_status.is_vtol) {
					_rates_sp.zero();
					_rates_int.zero();
					_thrust_sp = 0.0f;
					_att_control.zero();
					publish_actuator_controls();
				}
			}

			if (attitude_updated) {
				reset_yaw_sp = (!attitude_setpoint_generated && !_v_control_mode.flag_control_rattitude_enabled) ||
						_vehicle_land_detected.landed ||
						(_vehicle_status.is_vtol && !_vehicle_status.is_rotary_wing); // VTOL in FW mode
				attitude_dt = 0.f;
			}

			/* calculate loop update rate while disarmed or at least a few times (updating the filter is expensive) */
			if (!_v_control_mode.flag_armed || (now - task_start) < 3300000) {
				dt_accumulator += dt;
				++loop_counter;

				if (dt_accumulator > 1.f) {
					const float loop_update_rate = (float)loop_counter / dt_accumulator;
					_loop_update_rate_hz = _loop_update_rate_hz * 0.5f + loop_update_rate * 0.5f;
					dt_accumulator = 0;
					loop_counter = 0;
					_lp_filters_d.set_cutoff_frequency(_loop_update_rate_hz, _d_term_cutoff_freq.get());
				}
			}

			parameter_update_poll();
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
	orb_unsubscribe(_landing_gear_sub);

	orb_unsubscribe(_sensor_combined_sub);
	orb_unsubscribe(_esc_status_sub);
	orb_unsubscribe(_vision_sub);


	RateControl.terminate();
	AttitudeControl.terminate();
}

int SimulinkControl::task_spawn(int argc, char *argv[])
{
	_task_id = px4_task_spawn_cmd("sl_control",
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

SimulinkControl *SimulinkControl::instantiate(int argc, char *argv[])
{
	return new SimulinkControl();
}

int SimulinkControl::custom_command(int argc, char *argv[])
{
	return print_usage("unknown command");
}

int sl_control_main(int argc, char *argv[])
{
	return SimulinkControl::main(argc, argv);
}
