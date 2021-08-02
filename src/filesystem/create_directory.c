#include <los/filesystem.h>

#include <los/syscall.h>

int64_t create_directory(const char *path) {
    return system_call1(CREATE_DIRECTORY_SYSCALL, (uint64_t)path);
}