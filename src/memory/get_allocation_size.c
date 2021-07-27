#include <los/memory.h>

size_t get_allocation_size(void* ptr) { return ((size_t*)ptr)[-1]; }