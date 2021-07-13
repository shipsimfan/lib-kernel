#include <los/thread.h>

#include <los/syscall.h>

void exit_thread(uint64_t status) { system_call1(EXIT_THREAD_SYSCALL, status); }