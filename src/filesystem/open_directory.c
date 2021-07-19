#include <los/filesystem.h>

#include <los/syscall.h>

int64_t open_directory(const char* path) { return system_call1(OPEN_DIRECTORY_SYSCALL, (uint64_t)path); }