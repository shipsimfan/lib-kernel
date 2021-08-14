#include <los/filesystem.h>

#include <los/syscall.h>

isize seek_file(usize fd, usize offset, usize seek_from) { return system_call3(SEEK_FILE_SYSCALL, fd, offset, seek_from); }
