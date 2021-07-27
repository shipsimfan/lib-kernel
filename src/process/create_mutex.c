#include <los/process.h>

#include <los/syscall.h>

Mutex create_mutex() { return system_call0(CREATE_MUTEX_SYSCALL); }