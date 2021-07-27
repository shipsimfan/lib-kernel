#include <los/process.h>

#include <los/syscall.h>

int64_t unlock_mutex(Mutex mutex) { return system_call1(UNLOCK_MUTEX_SYSCALL, mutex); }