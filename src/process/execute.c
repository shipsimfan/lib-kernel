#include <los/process.h>

#include <los/syscall.h>

ProcessID execute(const char* filename) { return system_call1(EXECUTE_SYSCALL, (uint64_t)filename); }