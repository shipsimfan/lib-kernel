#include <los/filesystem.h>

#include <los/syscall.h>

int64_t tell_file(uint64_t fd) {
    return system_call1(TELL_FILE_SYSCALL, fd);
}