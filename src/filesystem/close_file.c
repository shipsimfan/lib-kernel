#include <los/filesystem.h>

#include <los/syscall.h>

void close_file(usize fd) { system_call1(CLOSE_FILE_SYSCALL, fd); }