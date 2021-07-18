#include <los/process.h>

#include <los/syscall.h>

ProcessID execute(const char* filename, const char** argv, const char** envp) { return system_call3(EXECUTE_SYSCALL, (uint64_t)filename, (uint64_t)argv, (uint64_t)envp); }