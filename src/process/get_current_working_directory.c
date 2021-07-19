#include <los/process.h>

#include <los/syscall.h>

int64_t get_current_working_directory(char* buffer, uint64_t buffer_len) { return system_call2(GET_CURRENT_WORKING_DIRECTORY_SYSCALL, (uint64_t)buffer, buffer_len); }