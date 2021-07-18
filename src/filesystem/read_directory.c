#include <los/filesystem.h>

#include <los/syscall.h>

uint64_t read_directory(uint64_t dd, Dirent* dest) { return system_call2(READ_DIRECTORY_SYSCALL, dd, (uint64_t)dest); }