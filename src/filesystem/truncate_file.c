#include <los/filesystem.h>

#include <los/syscall.h>

isize truncate_file(usize fd, usize new_length) { return system_call2(TRUNCATE_FILE_SYSCALL, fd, new_length); }