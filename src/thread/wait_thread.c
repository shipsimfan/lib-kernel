#include <los/thread.h>

#include <los/syscall.h>

uint64_t wait_thread(ThreadID id) { return system_call1(WAIT_THREAD_SYSCALL, id); }