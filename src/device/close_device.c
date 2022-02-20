#include <los/device.h>

#include <los/syscall.h>

void close_device(usize dd) { system_call1(CLOSE_DEVICE_SYSCALL, dd); }