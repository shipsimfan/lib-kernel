#include <los/userspace_mutex.h>

#include <los/syscall.h>

isize try_lock_mutex(usize md) { return system_call1(TRY_LOCK_MUTEX_SYSCALL, md); }