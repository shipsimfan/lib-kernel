#include "thread/tls.h"

void initialize_lib_kernel(size_t tls_size, size_t tls_alignment) {
    // Initialize the heap
    // initialize_heap();

    // Initialize thread local storage
    initialize_tls(tls_size, tls_alignment);
}