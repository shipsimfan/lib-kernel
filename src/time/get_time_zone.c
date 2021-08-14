#include <los/time.h>

#include <los/syscall.h>

isize get_time_zone() { return system_call0(GET_TIME_ZONE_SYSCALL); }