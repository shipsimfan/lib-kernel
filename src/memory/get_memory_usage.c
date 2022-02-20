#include <los/memory.h>

#include <los/syscall.h>

void get_memory_usage(MemoryUsage *target) {
    system_call1(GET_MEMORY_USAGE_SYSCALL, (usize)target);
}