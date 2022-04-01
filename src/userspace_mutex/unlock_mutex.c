#include <los/userspace_mutex.h>

#include <los/syscall.h>

void unlock_mutex(usize md) { system_call1(UNLOCK_MUTEX_SYSCALL, md); }