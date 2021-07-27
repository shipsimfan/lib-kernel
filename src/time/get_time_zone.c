#include <los/time.h>

#include <los/syscall.h>

int64_t get_time_zone() { return system_call0(GET_TIME_ZONE_SYSCALL); }