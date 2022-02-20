#include <los/device.h>

#include <los/syscall.h>

isize ioctrl_device(usize dd, usize code, usize argument) {
    return system_call3(IOCTRL_DEVICE_SYSCALL, dd, code, argument);
}