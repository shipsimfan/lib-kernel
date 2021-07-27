#include <los/time.h>

#include <los/syscall.h>

int64_t get_epoch_time() { return system_call0(GET_EPOCH_TIME_SYSCALL); }