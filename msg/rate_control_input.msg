uint64 timestamp		# time since system start (microseconds)
int32    act_fail_id
int32    act_limit_rpm
int32    act_saw_amp
int32    act_saw_freq

float32[3]  rates
float32[3]  rates_sp

float32     accel_z_sp
float32[3]  accel

int32[4]    esc_rpm

float32 fail_id

float32     dt_step     # time step takes (microseconds)

# Reference: RateController.h:
