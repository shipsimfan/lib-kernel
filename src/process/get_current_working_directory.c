#include <los/process.h>

#include <los/syscall.h>

isize get_current_working_directory(char* buffer, usize buffer_len) { return system_call2(GET_CURRENT_WORKING_DIRECTORY_SYSCALL, (usize)buffer, buffer_len); }