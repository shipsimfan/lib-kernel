#include <los/time.h>

#include <los/syscall.h>

isize get_process_time() { return system_call0(GET_PROCESS_TIME_SYSCALL); }