#include <los/filesystem.h>

#include <los/syscall.h>

int64_t write_file(uint64_t fd, void* buffer, uint64_t buffer_len) { return system_call3(WRITE_FILE_SYSCALL, fd, (uint64_t)buffer, buffer_len); }