#include <los/process.h>

#include <los/syscall.h>

void kill_process(isize id) { system_call1(KILL_PROCESS_SYSCALL, (usize)id); }
