#include <los/filesystem.h>

#include <los/syscall.h>

uint64_t seek_file(uint64_t fd, uint64_t offset, uint64_t seek_from) { return system_call3(SEEK_FILE_SYSCALL, fd, offset, seek_from); }
