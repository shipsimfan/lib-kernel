#include <los/filesystem.h>

#include <los/syscall.h>

isize remove_file(const char* path) {
    return system_call1(REMOVE_FILE_SYSCALL, (usize)path);
}