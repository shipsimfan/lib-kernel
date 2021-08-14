#include <los/console.h>

#include <los/syscall.h>

isize console_set_attribute(usize attribute) { return system_call1(CONSOLE_SET_ATTRIBUTE_SYSCALL, attribute); }