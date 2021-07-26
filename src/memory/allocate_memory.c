#include <los/memory.h>

size_t top = 0x10000000;

void* allocate_memory(size_t size, size_t alignment) {
    if (alignment < 8)
        alignment = 8;

    if (top % alignment != 0) {
        top -= top % alignment;
        top += alignment;
    }

    void* ret = (void*)top;
    top += size;
    return ret;
}