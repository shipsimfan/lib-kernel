#include <los/process.h>

#include <los/syscall.h>

void kill_thread(isize id) { system_call1(KILL_THREAD_SYSCALL, (usize)id); }
