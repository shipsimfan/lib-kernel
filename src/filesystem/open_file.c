#include <los/filesystem.h>

#include <los/syscall.h>
#include <los/util.h>

uint64_t open_file(const char* filepath) {
    uint64_t filepath_length = string_length(filepath);
    return system_call2(OPEN_FILE_SYSCALL, (uint64_t)filepath, filepath_length);
}