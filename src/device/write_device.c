#include <los/device.h>

#include <los/syscall.h>

isize write_device(usize dd, usize address, const void *buffer,
                   usize buffer_len) {
    return system_call4(WRITE_DEVICE_SYSCALL, dd, address, (usize)buffer,
                        buffer_len);
}