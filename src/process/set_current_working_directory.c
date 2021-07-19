#include <los/process.h>

#include <los/syscall.h>

int64_t set_current_working_directory(const char* path) { return system_call1(SET_CURRENT_WORKING_DIRECTORY_SYSCALL, (uint64_t)path); }