#include <los/filesystem.h>

#include <los/syscall.h>

void close_directory(usize dd) { system_call1(CLOSE_DIRECTORY_SYSCALL, dd); }