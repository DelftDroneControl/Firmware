/****************************************************************************
 *
 *   Copyright (c) 2015-2019 PX4 Development Team. All rights reserved.
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
 * @file sl_loe_detector_main.cpp
 * Loss of actuator effectiveness detector module
 *
 * @author Bram Strack van Schijndel
 */

#include <perf/perf_counter.h>

#include <algorithm>
#include <cfloat>

#include <drivers/drv_hrt.h>
#include <lib/mathlib/mathlib.h>
#include <lib/perf/perf_counter.h>
#include <px4_defines.h>
#include <px4_module.h>
#include <px4_module_params.h>
#include <px4_posix.h>
#include <px4_tasks.h>
#include <px4_time.h>

#include <uORB/Publication.hpp>

// Subscriptions
#include <uORB/topics/parameter_update.h>
#include <uORB/topics/sensor_combined.h>
#include <uORB/topics/esc_status.h>

// Publications
#include <uORB/topics/loe_detector_status.h>
#include <uORB/topics/loe_detector_input.h>

#include "LoeDetector/LoeDetector.h"

#define SAMPLE_RATE_MAX 500

extern "C" __EXPORT int sl_loe_detector_main(int argc, char *argv[]);

class SlLoeDetector final : public ModuleBase<SlLoeDetector>, public ModuleParams
{
public:
	SlLoeDetector();
	~SlLoeDetector() override;

	/** @see ModuleBase */
	static int task_spawn(int argc, char *argv[]);

	/** @see ModuleBase */
	static SlLoeDetector *instantiate(int argc, char *argv[]);

	/** @see ModuleBase */
	static int custom_command(int argc, char *argv[]);

	/** @see ModuleBase */
	static int print_usage(const char *reason = nullptr);

	/** @see ModuleBase::run() */
	void run() override;

	static void task_main_trampoline(int argc, char *argv[]);

	int print_status() override;

private:
	perf_counter_t _loop_perf; /**< loop performance counter */

	float _freq;

	int _params_sub{-1};
	int _sensors_sub{-1};
	int _esc_status_sub{-1};

	orb_advert_t _loe_detector_status_pub{nullptr};
	orb_advert_t _loe_detector_input_pub{nullptr};

	// uORB::Publication<loe_detector_status_s> _loe_detector_status;

	LoeDetectorModelClass _loe_detector;

	void parameters_updated();

	DEFINE_PARAMETERS(
		(ParamFloat<px4::params::FDD_K_THRES>)_fdd_k_thres,
		(ParamFloat<px4::params::FDD_FAIL_P_THRES>)_fdd_fail_p_thres,
		(ParamInt<px4::params::FDD_ON>)_fdd_on)
};

SlLoeDetector::SlLoeDetector() : ModuleParams(nullptr)
// _loop_perf(perf_alloc(PC_ELAPSED, "loe_detector"))
{
	_params_sub = orb_subscribe(ORB_ID(parameter_update));
	_sensors_sub = orb_subscribe(ORB_ID(sensor_combined));
	_esc_status_sub = orb_subscribe(ORB_ID(esc_status));
}

SlLoeDetector::~SlLoeDetector()
{
}

int SlLoeDetector::print_status()
{
	PX4_INFO("fail id: %i", _loe_detector.LoeDetector_Y.fail_id);

	PX4_INFO("fdd_k_thres: %f", LoeDetectorParams.fdd_k_thres);
	PX4_INFO("fdd_fail_p_thres %f", LoeDetectorParams.fdd_fail_p_thres);
	PX4_INFO("fdd_on: %f", LoeDetectorParams.fdd_on);

	PX4_INFO("freq: %f", _freq);

	// PX4_INFO("local position: %s", (_ekf.local_position_is_valid()) ? "valid" : "invalid");
	// PX4_INFO("global position: %s", (_ekf.global_position_is_valid()) ? "valid" : "invalid");

	// PX4_INFO("time slip: %" PRId64 " us", _last_time_slip_us);

	// perf_print_counter(_perf_update_data);
	// perf_print_counter(_perf_ekf_update);

	return 0;
}

void SlLoeDetector::parameters_updated()
{
	PX4_INFO("Parameters updated.");
	LoeDetectorParams.fdd_k_thres = _fdd_k_thres.get();
	LoeDetectorParams.fdd_fail_p_thres = _fdd_fail_p_thres.get();
	LoeDetectorParams.fdd_on = _fdd_on.get();
}

void SlLoeDetector::run()
{

	sensor_combined_s sensors = {};
	esc_status_s esc_status = {};
	loe_detector_input_s loe_detector_input = {};

	hrt_abstime last_run = hrt_absolute_time();

	while (!should_exit())
	{

		bool params_updated = false;
		orb_check(_params_sub, &params_updated);

		if (params_updated)
		{
			// read from param to clear updated flag
			parameter_update_s update;
			orb_copy(ORB_ID(parameter_update), _params_sub, &update);
			parameters_updated();
		}

		const hrt_abstime now = hrt_absolute_time();
		float dt = (now - last_run) / 1e6f;
		float dt_min = 1.0f / SAMPLE_RATE_MAX;

		if (dt < dt_min)
		{
			continue;
		}
		_freq = 1e6f/(now - last_run);
		last_run = now;

		// Poll sensors
		bool sensors_updated = false;
		orb_check(_sensors_sub, &sensors_updated);

		if (sensors_updated)
		{
			orb_copy(ORB_ID(sensor_combined), _sensors_sub, &sensors);

			std::copy(std::begin(sensors.gyro_rad), std::end(sensors.gyro_rad), std::begin(_loe_detector.LoeDetector_U.rates));

			// _loe_detector.LoeDetector_U.rates[0] = sensors.gyro_rad[0];
			// _loe_detector.LoeDetector_U.rates[1] = sensors.gyro_rad[1];
			// _loe_detector.LoeDetector_U.rates[2] = sensors.gyro_rad[2];

			// TODO: bias correction?
			_loe_detector.LoeDetector_U.acc_z = sensors.accelerometer_m_s2[2];
		}

		// Poll esc_status
		bool esc_status_updated = false;
		orb_check(_esc_status_sub, &esc_status_updated);

		if (esc_status_updated)
		{
			orb_copy(ORB_ID(esc_status), _esc_status_sub, &esc_status);

			// See pass.main.mix for esc mapping.
			_loe_detector.LoeDetector_U.esc_rpm[0] = esc_status.esc[2].esc_rpm;
			_loe_detector.LoeDetector_U.esc_rpm[1] = esc_status.esc[0].esc_rpm;
			_loe_detector.LoeDetector_U.esc_rpm[2] = esc_status.esc[3].esc_rpm;
			_loe_detector.LoeDetector_U.esc_rpm[3] = esc_status.esc[1].esc_rpm;
		}

		// Step loe_detector
		const hrt_abstime t_step_start = hrt_absolute_time();
		_loe_detector.step();

		float dt_step = hrt_absolute_time() - t_step_start;

		// Publish loe_detector_status
		loe_detector_status_s loe_detector_status{};
		loe_detector_status.timestamp = hrt_absolute_time();
		loe_detector_status.fail_id = _loe_detector.LoeDetector_Y.fail_id;

		int status_orb_instance;
		orb_publish_auto(ORB_ID(loe_detector_status), &_loe_detector_status_pub, &loe_detector_status, &status_orb_instance, ORB_PRIO_HIGH);

		// Publish loe_detector_input
		std::copy(std::begin(_loe_detector.LoeDetector_U.rates), std::end(_loe_detector.LoeDetector_U.rates), std::begin(loe_detector_input.rates));
		loe_detector_input.acc_z = _loe_detector.LoeDetector_U.acc_z;
		std::copy(std::begin(_loe_detector.LoeDetector_U.esc_rpm), std::end(_loe_detector.LoeDetector_U.esc_rpm), std::begin(loe_detector_input.esc_rpm));
		loe_detector_input.dt_step = dt_step;

		int output_orb_instance;
		orb_publish_auto(ORB_ID(loe_detector_input), &_loe_detector_input_pub, &loe_detector_input, &output_orb_instance, ORB_PRIO_HIGH);
	}
}

// bool SlLoeDetector::publish_wind_estimate(const hrt_abstime &timestamp)
// {
// 	// float wind_var[2];
// 	// _ekf.get_wind_velocity_var(wind_var);

// 	// // Publish wind estimate
// 	// wind_estimate_s wind_estimate;
// 	// wind_estimate.timestamp = timestamp;
// 	// wind_estimate.windspeed_north = velNE_wind[0];
// 	// wind_estimate.windspeed_east = velNE_wind[1];

// 	// int instance;
// 	// orb_publish_auto(ORB_ID(wind_estimate), &_wind_pub, &wind_estimate, &instance, ORB_PRIO_DEFAULT);

// 	return true;
// }

SlLoeDetector *SlLoeDetector::instantiate(int argc, char *argv[])
{
	SlLoeDetector *instance = new SlLoeDetector();
	return instance;
}

int SlLoeDetector::custom_command(int argc, char *argv[])
{
	return print_usage("unknown command");
}

int SlLoeDetector::print_usage(const char *reason)
{
	if (reason)
	{
		PX4_WARN("%s\n", reason);
	}

	PRINT_MODULE_DESCRIPTION(
		R"DESCR_STR(
### Description
Loss of effectiveness detector

)DESCR_STR");

	PRINT_MODULE_USAGE_NAME("sl_loe_detector", "estimator");
	PRINT_MODULE_USAGE_COMMAND("start");
	PRINT_MODULE_USAGE_DEFAULT_COMMANDS();

	return 0;
}

int SlLoeDetector::task_spawn(int argc, char *argv[])
{
	_task_id = px4_task_spawn_cmd("sl_loe_detector",
								  SCHED_DEFAULT,
								  SCHED_PRIORITY_ESTIMATOR,
								  1000,
								  (px4_main_t)&run_trampoline,
								  (char *const *)argv);

	if (_task_id < 0)
	{
		_task_id = -1;
		return -errno;
	}
	return 0;
}

int sl_loe_detector_main(int argc, char *argv[])
{
	return SlLoeDetector::main(argc, argv);
}
