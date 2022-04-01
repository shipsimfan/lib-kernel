#include <los/userspace_mutex.h>

#include <los/syscall.h>

void destroy_mutex(usize md) { system_call1(DESTROY_MUTEX_SYSCALL, md); }