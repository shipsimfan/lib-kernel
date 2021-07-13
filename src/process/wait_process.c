#include <los/process.h>

#include <los/syscall.h>

uint64_t wait_process(ProcessID id) { return system_call1(WAIT_PROCESS_SYSCALL, id); }