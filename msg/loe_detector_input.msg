uint64 timestamp # time since system start (microseconds)

float32[3] rates
float32 acc_z
int32[4] esc_rpm

uint64 dt_step
uint32 step_count # counts number of LoeDetector steps, lets you check for missing uORB messages