#include <los/device.h>

#include <los/syscall.h>

isize create_cond_var() { return system_call0(CREATE_COND_VAR_SYSCALL); }