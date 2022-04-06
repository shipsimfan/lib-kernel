#include <los/userspace_mutex.h>

#include <los/syscall.h>

isize create_mutex() { return system_call0(CREATE_MUTEX_SYSCALL); }