#include <los/filesystem.h>

#include <los/syscall.h>

void close_directory(uint64_t dd) { system_call1(CLOSE_DIRECTORY_SYSCALL, dd); }