#include <los/memory.h>

#define DEFAULT_ALLOCATION_ALIGNMENT 16

size_t top = 0x10000000;

void* allocate_memory(size_t size) {
    void* ret = (void*)top;

    if (size % DEFAULT_ALLOCATION_ALIGNMENT != 0) {
        size -= size % DEFAULT_ALLOCATION_ALIGNMENT;
        size += DEFAULT_ALLOCATION_ALIGNMENT;
    }

    top += size;
    return ret;
}