#include <los/process.h>

#include <los/syscall.h>
#include <los/util.h>

ProcessID execute(const char* filename) { return system_call2(EXECUTE_SYSCALL, (uint64_t)filename, string_length(filename)); }