#include <los/filesystem.h>

#include <los/syscall.h>

uint64_t open_file(const char* filepath) { return system_call1(OPEN_FILE_SYSCALL, (uint64_t)filepath); }