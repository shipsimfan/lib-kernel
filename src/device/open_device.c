#include <los/device.h>

#include <los/syscall.h>

isize open_device(const char *path) {
    return system_call1(OPEN_DEVICE_SYSCALL, (usize)path);
}