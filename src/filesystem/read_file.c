#include <los/filesystem.h>

#include <los/syscall.h>

isize read_file(usize fd, void* buffer, usize buffer_len) { return system_call3(READ_FILE_SYSCALL, fd, (usize)buffer, buffer_len); }