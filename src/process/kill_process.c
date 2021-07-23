#include <los/process.h>

#include <los/syscall.h>

void kill_process(int64_t id) { system_call1(KILL_PROCESS_SYSCALL, (uint64_t)id); }
