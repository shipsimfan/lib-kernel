#include <los/filesystem.h>

#include <los/syscall.h>

isize tell_file(usize fd) {
    return system_call1(TELL_FILE_SYSCALL, fd);
}