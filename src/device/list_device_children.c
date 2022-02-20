#include <los/device.h>

#include <los/syscall.h>

isize list_device_children(const char *path, char **buffer, usize buffer_len,
                           usize string_len) {
    return system_call4(LIST_DEVICE_CHILDREN_SYSCALL, (usize)path,
                        (usize)buffer, buffer_len, string_len);
}