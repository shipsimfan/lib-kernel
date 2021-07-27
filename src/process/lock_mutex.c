#include <los/process.h>

#include <los/syscall.h>

int64_t lock_mutex(Mutex mutex) { return system_call1(LOCK_MUTEX_SYSCALL, mutex); }