#include <los/process.h>

#include <los/syscall.h>

ProcessID execute(const char* filename, const char** argv, const char** envp, const StandardIO* stdio) { return system_call4(EXECUTE_SYSCALL, (usize)filename, (usize)argv, (usize)envp, (usize)stdio); }