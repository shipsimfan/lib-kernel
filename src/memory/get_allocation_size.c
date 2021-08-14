#include <los/memory.h>

usize get_allocation_size(void* ptr) { return ((usize*)ptr)[-1]; }