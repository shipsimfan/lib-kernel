#include <los/filesystem.h>

#include <los/syscall.h>

isize read_directory(usize dd, Dirent* dest) { return system_call2(READ_DIRECTORY_SYSCALL, dd, (usize)dest); }