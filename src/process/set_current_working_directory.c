#include <los/process.h>

#include <los/syscall.h>
#include <los/util.h>

uint64_t set_current_working_directory(const char* path) {
    uint64_t length = string_length(path);
    return system_call2(SET_CURRENT_WORKING_DIRECTORY_SYSCALL, (uint64_t)path, length);
}