#ifndef __LOS_MEMORY_H
#define __LOS_MEMORY_H

#include "types.h"

typedef struct MemoryUsage_t {
    usize page_size;
    usize available_pages;
    usize free_pages;
    usize kernel_heap_pages;
    usize userspace_pages;
    usize kernel_stack_usage;
} MemoryUsage;

void free_memory(void* ptr);
void* allocate_memory(usize size, usize alignment);
usize get_allocation_size(void* ptr);

void get_memory_usage(MemoryUsage* target);

#endif