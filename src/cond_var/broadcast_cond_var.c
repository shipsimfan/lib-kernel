#include <los/device.h>

#include <los/syscall.h>

isize broadcast_cond_var(isize cond) { return system_call1(BROADCAST_COND_VAR, cond); }