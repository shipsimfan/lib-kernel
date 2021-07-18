#include <los/process.h>

#include <los/syscall.h>

ProcessID execute(const char* filename, const char** argv) { return system_call2(EXECUTE_SYSCALL, (uint64_t)filename, (uint64_t)argv); }