#include <los/device.h>

#include <los/syscall.h>

isize destroy_cond_var(isize cond) { return system_call1(DESTROY_COND_VAR_SYSCALL, cond); }