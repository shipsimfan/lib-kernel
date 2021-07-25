#include <los/console.h>

#include <los/syscall.h>

int64_t console_set_attribute(uint64_t attribute) { return system_call1(CONSOLE_SET_ATTRIBUTE_SYSCALL, attribute); }