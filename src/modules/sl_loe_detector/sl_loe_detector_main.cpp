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

#include <uORB/topics/parameter_update.h>
#include <uORB/topics/sensor_combined.h>
#include <uORB/topics/loe_detector_status.h>

#include "LoeDetector/LoeDetector.h"

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
	int _params_sub{-1};
	int _sensors_sub{-1};

	orb_advert_t _att_pub{nullptr};

	// uORB::Publication<loe_detector_status_s> _loe_detector_status;

	LoeDetectorModelClass _loe_detector;

	// DEFINE_PARAMETERS(
		// (ParamExtInt<px4::params::EKF2_MIN_OBS_DT>) _obs_dt_min_ms ///< Maximum time delay of any sensor used to increase buffer length to handle large timing jitter (mSec)
	// )
};

SlLoeDetector::SlLoeDetector() : ModuleParams(nullptr)
{
	_params_sub = orb_subscribe(ORB_ID(parameter_update));
	_sensors_sub = orb_subscribe(ORB_ID(sensor_combined));
	updateParams();
}

SlLoeDetector::~SlLoeDetector()
{

}

int SlLoeDetector::print_status()
{
	// PX4_INFO("local position: %s", (_ekf.local_position_is_valid()) ? "valid" : "invalid");
	// PX4_INFO("global position: %s", (_ekf.global_position_is_valid()) ? "valid" : "invalid");

	// PX4_INFO("time slip: %" PRId64 " us", _last_time_slip_us);

	// perf_print_counter(_perf_update_data);
	// perf_print_counter(_perf_ekf_update);

	return 0;
}

void SlLoeDetector::run()
{

	sensor_combined_s sensors = {};

	while (!should_exit())
	{
		// int ret = px4_poll(fds, sizeof(fds) / sizeof(fds[0]), 1000);

		// if (!(fds[0].revents & POLLIN))
		// {
		// 	// no new data
		// 	continue;
		// }

		// if (ret < 0)
		// {
		// 	// Poll error, sleep and try again
		// 	px4_usleep(10000);
		// 	continue;
		// }
		// else if (ret == 0)
		// {
		// 	// Poll timeout or no new data, do nothing
		// 	continue;
		// }

		bool params_updated = false;
		orb_check(_params_sub, &params_updated);

		if (params_updated)
		{
			// read from param to clear updated flag
			parameter_update_s update;
			orb_copy(ORB_ID(parameter_update), _params_sub, &update);
		}

		orb_copy(ORB_ID(sensor_combined), _sensors_sub, &sensors);

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
Attitude and position estimator using an Extended Kalman Filter. It is used for Multirotors and Fixed-Wing.

The documentation can be found on the [tuning_the_ecl_ekf](https://dev.px4.io/en/tutorials/tuning_the_ecl_ekf.html) page.

ekf2 can be started in replay mode (`-r`): in this mode it does not access the system time, but only uses the
timestamps from the sensor topics.

)DESCR_STR");

	PRINT_MODULE_USAGE_NAME("ekf2", "estimator");
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
