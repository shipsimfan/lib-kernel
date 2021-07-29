#include <los/filesystem.h>

#include <los/syscall.h>

int64_t truncate_file(uint64_t fd, uint64_t new_length) { return system_call2(TRUNCATE_FILE_SYSCALL, fd, new_length); }