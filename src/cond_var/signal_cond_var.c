#include <los/device.h>

#include <los/syscall.h>

isize signal_cond_var(isize cond) { return system_call1(SIGNAL_COND_VAR, cond); }