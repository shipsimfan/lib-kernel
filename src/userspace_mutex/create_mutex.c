#include <los/userspace_mutex.h>

#include <los/syscall.h>

void create_mutex(usize md) { system_call1(CREATE_MUTEX_SYSCALL, md); }