#include <los/userspace_mutex.h>

#include <los/syscall.h>

isize lock_mutex(usize md) { return system_call1(LOCK_MUTEX_SYSCALL, md); }