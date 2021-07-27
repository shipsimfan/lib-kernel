#include <los/memory.h>

size_t top = 0x10000000;

void* allocate_memory(size_t size, size_t alignment) {
    if (alignment < 8)
        alignment = 8;

    if ((top + 8) % alignment != 0) {
        top -= (top + 8) % alignment;
        top += alignment;
    }

    void* ret = (void*)(top + 8);
    *((size_t*)top) = size;
    top += size + 8;
    return ret;
}