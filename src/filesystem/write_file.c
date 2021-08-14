#include <los/filesystem.h>

#include <los/syscall.h>

isize write_file(usize fd, void* buffer, usize buffer_len) { return system_call3(WRITE_FILE_SYSCALL, fd, (usize)buffer, buffer_len); }