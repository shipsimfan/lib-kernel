#include <los/process.h>

#include <los/syscall.h>

void exit_process(int64_t status) { system_call1(EXIT_PROCESS_SYSCALL, (uint64_t)status); }