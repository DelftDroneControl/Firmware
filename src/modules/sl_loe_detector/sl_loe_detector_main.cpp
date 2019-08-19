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

	int _parameter_update_sub{-1};
	int _sensor_combined_sub{-1};
	int _esc_status_sub{-1};

	orb_advert_t _loe_detector_status_pub{nullptr};
	orb_advert_t _loe_detector_input_pub{nullptr};

	// uORB::Publication<loe_detector_status_s> _loe_detector_status;

	LoeDetectorModelClass _loe_detector;

	// Pointers to LoeDetector in/output structs
	ExtU_LoeDetector_T *_loe_detector_in = &_loe_detector.LoeDetector_U;
	ExtY_LoeDetector_T *_loe_detector_out = &_loe_detector.LoeDetector_Y;

	int _step_count = 0;

	int _fail_id;
	/* note this fail_id is different than the one from _loe_detector,
	this is the one published to the loe_detector_status topic */

	void step_loe_detector();

	void parameters_updated();
	void parameters_update(int parameter_update_sub, bool force = false);

	DEFINE_PARAMETERS(
		(ParamFloat<px4::params::FDD_K_THRES>)_fdd_k_thres,
		(ParamFloat<px4::params::FDD_FAIL_P_THRES>)_fdd_fail_p_thres,
		(ParamInt<px4::params::FDD_FAIL_ID_OVER>)_fdd_fail_id_over,
		(ParamInt<px4::params::FDD_ON>)_fdd_on)
};

SlLoeDetector::SlLoeDetector() : ModuleParams(nullptr)
// _loop_perf(perf_alloc(PC_ELAPSED, "loe_detector"))
{
	_parameter_update_sub = orb_subscribe(ORB_ID(parameter_update));
	_sensor_combined_sub = orb_subscribe(ORB_ID(sensor_combined));
	_esc_status_sub = orb_subscribe(ORB_ID(esc_status));
}

SlLoeDetector::~SlLoeDetector()
{
}

int SlLoeDetector::print_status()
{
	PX4_INFO("fail id: %i", _loe_detector_out->fail_id);
	PX4_INFO("landed: %i", _loe_detector_out->landed);

	PX4_INFO("fdd_k_thres: %f", LoeDetectorParams.fdd_k_thres);
	PX4_INFO("fdd_fail_p_thres %f", LoeDetectorParams.fdd_fail_p_thres);
	PX4_INFO("fdd_fail_id_over %i", _fdd_fail_id_over.get());
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

void SlLoeDetector::parameters_update(int parameter_update_sub, bool force)
{
	bool updated;
	struct parameter_update_s param_upd;

	orb_check(parameter_update_sub, &updated);

	if (updated)
	{
		orb_copy(ORB_ID(parameter_update), parameter_update_sub, &param_upd);
	}

	if (force || updated)
	{
		updateParams();
		parameters_updated();
	}
}

void SlLoeDetector::run()
{

	sensor_combined_s sensor_combined = {};
	esc_status_s esc_status = {};

	_loe_detector.initialize();

	hrt_abstime last_run = hrt_absolute_time();

	// Run the loop synchronized to the sensor_combined topic publication
	px4_pollfd_struct_t fds[1];
	fds[0].fd = _sensor_combined_sub;
	fds[0].events = POLLIN;

	// initialize parameters
	parameters_update(_parameter_update_sub, true);

	while (!should_exit())
	{
		// wait for up to 10ms for data
		int poll_return = px4_poll(fds, (sizeof(fds) / sizeof(fds[0])), 10);

		if (poll_return == 0)
		{
			// Timeout: let the loop run anyway, don't do `continue` here
		}
		else if (poll_return < 0)
		{
			// this is undesirable but not much we can do
			PX4_ERR("poll error %d, %d", poll_return, errno);
			px4_usleep(50000);
			continue;
		}
		else if (fds[0].revents & POLLIN)
		{
		}

		// Limit rate to SAMPLE_RATE_MAX
		const hrt_abstime now = hrt_absolute_time(); // microseconds
		float dt = (now - last_run) / 1e6f;			 // seconds
		float dt_min = 1.0f / SAMPLE_RATE_MAX;
		if (dt < dt_min)
		{
			continue;
		}
		_freq = 1e6f / (now - last_run);
		last_run = now;

		// Assign sensor_comined
		orb_copy(ORB_ID(sensor_combined), _sensor_combined_sub, &sensor_combined);
		std::copy(std::begin(sensor_combined.gyro_rad), std::end(sensor_combined.gyro_rad), std::begin(_loe_detector_in->rates));

		// TODO: bias correction?
		_loe_detector_in->acc_z = sensor_combined.accelerometer_m_s2[2];

		// Poll esc_status
		bool esc_status_updated = false;
		orb_check(_esc_status_sub, &esc_status_updated);

		if (esc_status_updated)
		{
			orb_copy(ORB_ID(esc_status), _esc_status_sub, &esc_status);

			// See pass.main.mix for esc mapping.
			_loe_detector_in->esc_rpm[0] = esc_status.esc[2].esc_rpm;
			_loe_detector_in->esc_rpm[1] = esc_status.esc[0].esc_rpm;
			_loe_detector_in->esc_rpm[2] = esc_status.esc[3].esc_rpm;
			_loe_detector_in->esc_rpm[3] = esc_status.esc[1].esc_rpm;
		}

		if (esc_status.timestamp && sensor_combined.timestamp)
		{
			hrt_abstime max_time_between_inputs = 2 * (1.0f / SAMPLE_RATE_MAX) * 1e6f; // microseconds

			hrt_abstime time_between_inputs = abs(esc_status.timestamp - sensor_combined.timestamp);

			// Only run loe_detector if timestamps are less than 2*SAMPLE_RATE_MAX apart
			if (time_between_inputs < max_time_between_inputs)
			{
				step_loe_detector();
			}
			else
			{
				// PX4_INFO("abs(esc_status.timestamp - sensor_combined.timestamp): %f ms", time_between_inputs / 1000.0f);
			}
		}

		parameters_update(_parameter_update_sub);
	}
}

void SlLoeDetector::step_loe_detector()
{
	// Step loe_detector
	const hrt_abstime t_step_start = hrt_absolute_time();
	_loe_detector.step();
	_step_count++;

	float dt_step = hrt_absolute_time() - t_step_start;

	// Publish loe_detector_status
	loe_detector_status_s loe_detector_status{};

	loe_detector_status.timestamp = hrt_absolute_time();

	// For now, we only want to detect a failure once
	if (_loe_detector_out->fail_id_changed && _loe_detector_out->fail_id > 0 && _fail_id == 0 && _fdd_on.get())
	{
		_fail_id = _loe_detector_out->fail_id;
		PX4_INFO("FAIL ID changed to: %i", _fail_id);
	}

	// Override fail_id if set in parameters
	if (_fdd_fail_id_over.get() >= 0)
	{
		_fail_id = _fdd_fail_id_over.get();
	}

	// Resets state if FDD is off
	if (!_fdd_on.get() && _fail_id != 0)
	{
		_fail_id = 0;
		_loe_detector.initialize(); // this also sets `landed` to false, resetting the LandDetector
		PX4_INFO("FAIL ID reset to: %i", _fail_id);
	}

	loe_detector_status.fail_id = _fail_id;

	int status_orb_instance;
	orb_publish_auto(ORB_ID(loe_detector_status), &_loe_detector_status_pub, &loe_detector_status, &status_orb_instance, ORB_PRIO_HIGH);

	// Publish loe_detector_input
	loe_detector_input_s loe_detector_input = {};

	loe_detector_input.timestamp = hrt_absolute_time();
	std::copy(std::begin(_loe_detector_in->rates), std::end(_loe_detector_in->rates), std::begin(loe_detector_input.rates));
	loe_detector_input.acc_z = _loe_detector_in->acc_z;
	std::copy(std::begin(_loe_detector_in->esc_rpm), std::end(_loe_detector_in->esc_rpm), std::begin(loe_detector_input.esc_rpm));
	loe_detector_input.dt_step = dt_step;
	loe_detector_input.step_count = _step_count;

	int output_orb_instance;
	orb_publish_auto(ORB_ID(loe_detector_input), &_loe_detector_input_pub, &loe_detector_input, &output_orb_instance, ORB_PRIO_HIGH);
}

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
								  SCHED_PRIORITY_SENSOR_HUB,
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
