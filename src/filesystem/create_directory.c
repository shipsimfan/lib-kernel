#include <los/filesystem.h>

#include <los/syscall.h>

isize create_directory(const char* path) {
    return system_call1(CREATE_DIRECTORY_SYSCALL, (usize)path);
}