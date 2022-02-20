#include <los/device.h>

#include <los/syscall.h>

isize read_device(usize dd, usize address, void *buffer, usize buffer_len) {
    return system_call4(READ_DEVICE_SYSCALL, dd, address, (usize)buffer,
                        buffer_len);
}