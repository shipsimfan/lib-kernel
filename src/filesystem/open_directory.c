#include <los/filesystem.h>

#include <los/syscall.h>

isize open_directory(const char* path) { return system_call1(OPEN_DIRECTORY_SYSCALL, (usize)path); }