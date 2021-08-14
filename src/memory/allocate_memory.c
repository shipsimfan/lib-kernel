#include <los/memory.h>

usize top = 0x10000000;

void* allocate_memory(usize size, usize alignment) {
    if (alignment < 8)
        alignment = 8;

    if ((top + 8) % alignment != 0) {
        top -= (top + 8) % alignment;
        top += alignment;
    }

    void* ret = (void*)(top + 8);
    *((usize*)top) = size;
    top += size + 8;
    return ret;
}