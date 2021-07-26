#ifndef __LOS_MEMORY_H
#define __LOS_MEMORY_H

#include <stddef.h>

void free_memory(void* ptr);
void* allocate_memory(size_t size, size_t alignment);

#endif