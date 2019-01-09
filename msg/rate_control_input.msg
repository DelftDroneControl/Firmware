uint64 timestamp		# time since system start (microseconds)

float32[3]  rates
float32[3]  rates_sp

float32     thrust_sp
float32     accel_z

int32[4]    esc_rpm

float32     dt_step     # time step takes (microseconds)

# Reference: RateController.h:
