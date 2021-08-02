#include <los/filesystem.h>

#include <los/syscall.h>

int64_t remove_file(const char* path) {
    return system_call1(REMOVE_FILE_SYSCALL, (uint64_t)path);
}