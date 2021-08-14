#include <los/time.h>

#include <los/syscall.h>

isize get_epoch_time() { return system_call0(GET_EPOCH_TIME_SYSCALL); }