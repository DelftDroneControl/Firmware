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

#include <lib/mixer/mixer.h>
#include <matrix/matrix/math.hpp>
#include <perf/perf_counter.h>
#include <px4_config.h>
#include <px4_defines.h>
#include <px4_module.h>
#include <px4_module_params.h>
#include <px4_posix.h>
#include <px4_tasks.h>
#include <uORB/topics/actuator_controls.h>
#include <uORB/topics/parameter_update.h>
#include <uORB/topics/sensor_bias.h>
#include <uORB/topics/sensor_correction.h>
#include <uORB/topics/sensor_combined.h>
#include <uORB/topics/sensor_gyro.h>

#include <uORB/topics/vehicle_attitude.h>
#include <uORB/topics/vehicle_control_mode.h>

#include <uORB/topics/vehicle_local_position.h>
#include <uORB/topics/vehicle_local_position_setpoint.h>

#include <uORB/topics/vehicle_status.h>

#include <uORB/topics/debug_key_value.h>
#include <uORB/topics/pos_direct_control_input.h>

#include <uORB/topics/esc_status.h>


/**
 * Multicopter attitude control app start / stop handling function
 */
extern "C" __EXPORT int sl_pos_direct_control_main(int argc, char *argv[]);

#define MAX_GYRO_COUNT 3

class SlPosDirectControl : public ModuleBase<SlPosDirectControl>, public ModuleParams
{
public:
	SlPosDirectControl();

	virtual ~SlPosDirectControl() = default;

	/** @see ModuleBase */
	static int task_spawn(int argc, char *argv[]);

	/** @see ModuleBase */
	static SlPosDirectControl *instantiate(int argc, char *argv[]);

	/** @see ModuleBase */
	static int custom_command(int argc, char *argv[]);

	/** @see ModuleBase */
	static int print_usage(const char *reason = nullptr);

	/** @see ModuleBase::run() */
	void run() override;

private:
	// int number_errors = 0;

	float _sample_rate_max = 250.0f;

	/**
	 * initialize some vectors/matrices from parameters
	 */
	void			parameters_updated();

	/**
	 * Check for parameter update and handle it.
	 */
	void		parameter_update_poll();
	void		sensor_bias_poll();
	void		sensor_correction_poll();
	void		vehicle_attitude_poll();
	void		vehicle_control_mode_poll();
	void		vehicle_status_poll();
	void		sensor_combined_poll();
	void		vehicle_local_position_poll();
	void 		vehicle_local_pos_sp_poll();

	void		esc_status_poll();

	/**
	 * Attitude controller.
	 */
	void		control_attitude(float dt);

	/**
	 * Attitude rates controller.
	 */
	void		control_pos_direct(float dt);

	// /**
	//  * Throttle PID attenuation.
	//  */
	// matrix::Vector3f pid_attenuations(float tpa_breakpoint, float tpa_rate);


	int		_v_att_sub{-1};			/**< vehicle attitude subscription */
	int		_v_control_mode_sub{-1};	/**< vehicle control mode subscription */
	int		_params_sub{-1};		/**< parameter updates subscription */
	int		_vehicle_status_sub{-1};	/**< vehicle status subscription */
	int		_sensor_gyro_sub[MAX_GYRO_COUNT];	/**< gyro data subscription */
	int		_sensor_correction_sub{-1};	/**< sensor thermal correction subscription */
	int		_sensor_bias_sub{-1};		/**< sensor in-run bias correction subscription */
	int		_sensor_combined_sub{-1};	/**< vehicle land detected subscription */
	int		_vehicle_local_position_sub{-1};	/**< vehicle land detected subscription */
	int     _local_pos_sp_sub{-1};	/**< vehicle position setpoint subscription */

	int		_esc_status_sub{-1};

	unsigned _gyro_count{1};
	int _selected_gyro{0};

	orb_advert_t	_v_rates_sp_pub{nullptr};		/**< rate setpoint publication */
	orb_advert_t	_actuators_0_pub{nullptr};		/**< attitude actuator controls publication */
	orb_advert_t	_controller_status_pub{nullptr};	/**< controller status publication */

	bool		_actuators_0_circuit_breaker_enabled{false};	/**< circuit breaker to suppress output */

	struct vehicle_attitude_s		_v_att {};		/**< vehicle attitude */
	struct vehicle_control_mode_s		_v_control_mode {};	/**< vehicle control mode */
	struct actuator_controls_s		_actuators {};		/**< actuator controls */
	struct vehicle_status_s			_vehicle_status {};	/**< vehicle status */
	struct sensor_gyro_s			_sensor_gyro {};	/**< gyro data before thermal correctons and ekf bias estimates are applied */
	struct sensor_correction_s		_sensor_correction {};	/**< sensor thermal corrections */
	struct sensor_bias_s			_sensor_bias {};	/**< sensor in-run bias corrections */
	struct sensor_combined_s		_sensor_combined {};
	struct vehicle_local_position_s		_vehicle_local_position {};
	struct vehicle_local_position_setpoint_s	_local_pos_sp {};

	struct esc_status_s				_esc_status {};

	perf_counter_t	_loop_perf;			/**< loop performance counter */

	// static constexpr const float initial_update_rate_hz = 250.f; /**< loop update rate used for initialization */
	// float _loop_update_rate_hz{initial_update_rate_hz};          /**< current rate-controller loop update rate in [Hz] */

	matrix::Dcmf _board_rotation;			/**< rotation matrix for the orientation that the board is mounted */

	DEFINE_PARAMETERS(
		(ParamInt<px4::params::SENS_BOARD_ROT>) _board_rotation_param,

		(ParamFloat<px4::params::SENS_BOARD_X_OFF>) _board_offset_x,
		(ParamFloat<px4::params::SENS_BOARD_Y_OFF>) _board_offset_y,
		(ParamFloat<px4::params::SENS_BOARD_Z_OFF>) _board_offset_z,

		(ParamFloat<px4::params::SL_POS_CTRL_RATE>) _sl_pos_ctrl_rate,

		(ParamFloat<px4::params::SL_ROT_DIRECTION>) _sl_rot_direction,

		(ParamFloat<px4::params::SL_POS_P_GAIN>) _sl_pos_p_gain,
		(ParamFloat<px4::params::SL_ALT_P_GAIN>) _sl_alt_p_gain,

		(ParamFloat<px4::params::SL_POS_D_GAIN>) _sl_pos_d_gain,
		(ParamFloat<px4::params::SL_ALT_D_GAIN>) _sl_alt_d_gain,

		(ParamFloat<px4::params::SL_ATT_P_GAIN>) _sl_att_p_gain,
		(ParamFloat<px4::params::SL_ATT_D_GAIN>) _sl_att_d_gain,
		(ParamFloat<px4::params::SL_YAW_P_GAIN>) _sl_yaw_p_gain,
		(ParamFloat<px4::params::SL_YAW_D_GAIN>) _sl_yaw_d_gain,

		(ParamFloat<px4::params::SL_THRUST_COEFF>) _sl_thrust_coeff,
		(ParamFloat<px4::params::SL_GEOM_L>) _sl_geom_l,
		(ParamFloat<px4::params::SL_GEOM_B>) _sl_geom_b,
		(ParamFloat<px4::params::SL_MASS>) _sl_mass,
		(ParamFloat<px4::params::SL_INERTIA_X>) _sl_inertia_x,
		(ParamFloat<px4::params::SL_INERTIA_Y>) _sl_inertia_y,
		(ParamFloat<px4::params::SL_INERTIA_Z>) _sl_inertia_z,
		(ParamFloat<px4::params::SL_INERTIA_PROP>) _sl_inertia_prop,
		(ParamFloat<px4::params::SL_TORQUE_COEFF>) _sl_torque_coeff,

		(ParamFloat<px4::params::SL_X_POS_SP>) _sl_x_pos_sp,
		(ParamFloat<px4::params::SL_Y_POS_SP>) _sl_y_pos_sp,
		(ParamFloat<px4::params::SL_Z_POS_SP>) _sl_z_pos_sp,
		(ParamFloat<px4::params::SL_YAW_SP>) _sl_yaw_sp,
		
		(ParamInt<px4::params::SL_FAIL_FLAG>) _sl_fail_flag,
		(ParamInt<px4::params::SL_RPM_FEEDBACK>) _sl_rpm_feedback
		
	)

    struct debug_key_value_s dbg {};
	orb_advert_t pub_dbg {nullptr};
	// struct debug_vect_s debug_vect {};
	// orb_advert_t pub_debug_vect {nullptr};
	struct pos_direct_control_input_s _pos_direct_control_input {};
	orb_advert_t pub_pos_direct_control_input {nullptr};
};

