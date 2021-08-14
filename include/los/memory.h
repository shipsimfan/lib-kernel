#ifndef __LOS_MEMORY_H
#define __LOS_MEMORY_H

#include "types.h"

void free_memory(void* ptr);
void* allocate_memory(usize size, usize alignment);
usize get_allocation_size(void* ptr);

#endif