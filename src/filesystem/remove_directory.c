#include <los/filesystem.h>

#include <los/syscall.h>

int64_t remove_directory(const char* path) {
    return system_call1(REMOVE_DIRECTORY_SYSCALL, (uint64_t)path);
}