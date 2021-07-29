#include <los/filesystem.h>

#include <los/syscall.h>

int64_t open_file(const char* filepath, uint64_t flags) { return system_call2(OPEN_FILE_SYSCALL, (uint64_t)filepath, flags); }