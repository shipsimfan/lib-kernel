#include <los/filesystem.h>

#include <los/syscall.h>

isize open_file(const char* filepath, usize flags) { return system_call2(OPEN_FILE_SYSCALL, (usize)filepath, flags); }