#include <los/filesystem.h>

#include <los/syscall.h>

isize remove_directory(const char* path) {
    return system_call1(REMOVE_DIRECTORY_SYSCALL, (usize)path);
}