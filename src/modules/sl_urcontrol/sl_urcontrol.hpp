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
#include <uORB/topics/urcontrol_input.h>

#include <uORB/topics/esc_status.h>
#include <uORB/topics/vehicle_odometry.h>
#include <uORB/topics/position_setpoint_triplet.h>

/**
 * Multicopter attitude control app start / stop handling function
 */
extern "C" __EXPORT int sl_urcontrol_main(int argc, char *argv[]);

#define MAX_GYRO_COUNT 3

class SlURControl : public ModuleBase<SlURControl>, public ModuleParams
{
public:
	SlURControl();

	virtual ~SlURControl() = default;

	/** @see ModuleBase */
	static int task_spawn(int argc, char *argv[]);

	/** @see ModuleBase */
	static SlURControl *instantiate(int argc, char *argv[]);

	/** @see ModuleBase */
	static int custom_command(int argc, char *argv[]);

	/** @see ModuleBase */
	static int print_usage(const char *reason = nullptr);

	/** @see ModuleBase::run() */
	void run() override;

private:
	// int number_errors = 0;

	float _sample_rate_max = 500.0f;

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
	void	    odometry_status_poll();
	void		position_setpoint_triplet_poll();

	/**
	 * Attitude controller.
	 */
	void		control_attitude(float dt);

	/**
	 * Attitude rates controller.
	 */
	void		control_ur(float dt);

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
	int 	_ev_odom_sub{-1};
	int     _position_sp_triplet_sub{-1};

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
	struct vehicle_odometry_s		_ev_odom {};
	struct position_setpoint_triplet_s _position_sp_triplet{};

	perf_counter_t	_loop_perf;			/**< loop performance counter */

	// static constexpr const float initial_update_rate_hz = 250.f; /**< loop update rate used for initialization */
	// float _loop_update_rate_hz{initial_update_rate_hz};          /**< current rate-controller loop update rate in [Hz] */

	matrix::Dcmf _board_rotation;			/**< rotation matrix for the orientation that the board is mounted */

	DEFINE_PARAMETERS(
		(ParamInt<px4::params::SENS_BOARD_ROT>) _board_rotation_param,

		(ParamFloat<px4::params::SENS_BOARD_X_OFF>) _board_offset_x,
		(ParamFloat<px4::params::SENS_BOARD_Y_OFF>) _board_offset_y,
		(ParamFloat<px4::params::SENS_BOARD_Z_OFF>) _board_offset_z,

		// Inputs
		(ParamFloat<px4::params::SL_SP_X_POS>) _sl_x_pos_sp,
		(ParamFloat<px4::params::SL_SP_Y_POS>) _sl_y_pos_sp,
		(ParamFloat<px4::params::SL_SP_Z_POS>) _sl_z_pos_sp,

		(ParamInt<px4::params::SL_FAIL_FLAG_POS>) _sl_fail_flag,
		(ParamFloat<px4::params::SL_SP_YAW>) _sl_yaw_sp,

		// Params
		

		// Estimation
		(ParamInt<px4::params::SL_EST_USEEKF>) _sl_est_useekf,
		(ParamFloat<px4::params::SL_EST_OMEGAFILT>) _sl_est_omegafiltert,
		(ParamFloat<px4::params::SL_EST_POSFILT>) _sl_est_posfiltert,
		(ParamFloat<px4::params::SL_EST_VELFILT>) _sl_est_velfiltert,

		// Pos
		(ParamInt<px4::params::SL_POS_ENABLE>) _sl_pos_enable,
		(ParamFloat<px4::params::SL_POS_KP_POSX>) _sl_pos_kp_posx,
		(ParamFloat<px4::params::SL_POS_KP_POSY>) _sl_pos_kp_posy,
		(ParamFloat<px4::params::SL_POS_KP_POSZ>) _sl_pos_kp_posz,
		(ParamFloat<px4::params::SL_POS_KP_VELX>) _sl_pos_kp_velx,
		(ParamFloat<px4::params::SL_POS_KP_VELY>) _sl_pos_kp_vely,
		(ParamFloat<px4::params::SL_POS_KP_VELZ>) _sl_pos_kp_velz,
		(ParamFloat<px4::params::SL_POS_KI_VELX>) _sl_pos_ki_velx,
		(ParamFloat<px4::params::SL_POS_KI_VELY>) _sl_pos_ki_vely,
		(ParamFloat<px4::params::SL_POS_KI_VELZ>) _sl_pos_ki_velz,
		(ParamFloat<px4::params::SL_POS_FAILGAIN>) _sl_pos_failGain,
		

		// Altitude
		(ParamFloat<px4::params::SL_ALT_KP_POS>) _sl_alt_kp_pos,
		(ParamFloat<px4::params::SL_ALT_KP_VEL>) _sl_alt_kp_vel,
		(ParamFloat<px4::params::SL_ALT_KI_VEL>) _sl_alt_ki_vel,

		// YRC
		(ParamInt<px4::params::SL_YRC_ENABLE>) _sl_yrc_enable,
		(ParamInt<px4::params::SL_YRC_MODE>) _sl_yrc_mode,
		(ParamFloat<px4::params::SL_YRC_KP_PSI>) _sl_yrc_Kp_psi,
		(ParamFloat<px4::params::SL_YRC_RATECMD>) _sl_yrc_rateCmd,
		(ParamInt<px4::params::SL_YRCFAIL_MODE>) _sl_yrcfail_mode,
		
		
		// Attitude
		(ParamFloat<px4::params::SL_ATT_ROTKP>) _sl_attitude_rotKp,
		(ParamInt<px4::params::SL_ATT_ENABPREC>) _sl_attitude_enablePrec,
		(ParamFloat<px4::params::SL_ATT_MAXPREC>) _sl_attitude_maxprecspeed,
		(ParamFloat<px4::params::SL_ATT_MMARGIN>) _sl_attitude_mmargin,

		// Rate
		(ParamInt<px4::params::SL_RDOT_MODE>) _sl_rate_mode,
		(ParamInt<px4::params::SL_RDOT_MMODE>) _sl_rate_momentMode,

		(ParamFloat<px4::params::SL_INDI_KPX>) _sl_ratedot_indi_kpx,
		(ParamFloat<px4::params::SL_INDI_KPY>) _sl_ratedot_indi_kpy,
		(ParamFloat<px4::params::SL_INDI_KPZ>) _sl_ratedot_indi_kpz,

		(ParamFloat<px4::params::SL_RDOT_KPU>) _sl_ratedot_kpu,
		(ParamFloat<px4::params::SL_RDOT_KPV>) _sl_ratedot_kpv,
		(ParamFloat<px4::params::SL_RDOT_KPR>) _sl_ratedot_kpr,
		(ParamFloat<px4::params::SL_RDOT_KIU>) _sl_ratedot_kiu,
		(ParamFloat<px4::params::SL_RDOT_KIV>) _sl_ratedot_kiv,
		(ParamFloat<px4::params::SL_RDOT_KIR>) _sl_ratedot_kir,
		(ParamFloat<px4::params::SL_RDOT_KDU>) _sl_ratedot_kdu,
		(ParamFloat<px4::params::SL_RDOT_KDV>) _sl_ratedot_kdv,
		(ParamFloat<px4::params::SL_RDOT_KDR>) _sl_ratedot_kdr,
		(ParamFloat<px4::params::SL_RDOT_DFILT>)  _sl_ratedot_derFilterT,
		(ParamFloat<px4::params::SL_RDOT_UVDFILT>)  _sl_ratedot_uvrdesderFilterT,

		(ParamFloat<px4::params::SL_MINDI_DFILT>) _sl_ratedot_mindi_derFiltT,
		(ParamFloat<px4::params::SL_MINDI_MKPU>) _sl_ratedot_mindi_mkpu,
		(ParamFloat<px4::params::SL_MINDI_MKPV>) _sl_ratedot_mindi_mkpv,
		(ParamFloat<px4::params::SL_MINDI_MKPR>) _sl_ratedot_mindi_mkpr


		
	)

    struct debug_key_value_s dbg {};
	orb_advert_t pub_dbg {nullptr};
	// struct debug_vect_s debug_vect {};
	// orb_advert_t pub_debug_vect {nullptr};
	struct urcontrol_input_s _urcontrol_input {};
	orb_advert_t pub_urcontrol_input {nullptr};

};

