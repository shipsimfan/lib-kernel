#include <los/thread.h>

#include <los/syscall.h>

ThreadID create_thread(ThreadEntry entry) { return system_call1(CREATE_THREAD_SYSCALL, (uint64_t)entry); }