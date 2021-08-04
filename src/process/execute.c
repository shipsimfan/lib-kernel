#include <los/process.h>

#include <los/syscall.h>

ProcessID execute(const char* filename, const char** argv, const char** envp, const StandardIO* stdio) { return system_call4(EXECUTE_SYSCALL, (uint64_t)filename, (uint64_t)argv, (uint64_t)envp, (uint64_t)stdio); }