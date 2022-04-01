#include <los/userspace_mutex.h>

#include <los/syscall.h>

isize create_mutex(usize md) { return system_call1(CREATE_MUTEX_SYSCALL, md); }