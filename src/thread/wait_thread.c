#include <los/thread.h>

#include <los/syscall.h>

int64_t wait_thread(ThreadID id) { return system_call1(WAIT_THREAD_SYSCALL, id); }