#include "tls.h"

#include <los/memory.h>
#include <los/syscall.h>

size_t master_tls_size;
size_t master_tls_alloc_size;
size_t master_tls_aligment;

void* memcpy(void* dest, const void* src, size_t n) {
    char* ptr1 = dest;
    const char* ptr2 = src;
    for (size_t i = 0; i < n; i++, ptr1++, ptr2++)
        *ptr1 = *ptr2;

    return dest;
}

void initialize_tls(size_t tls_size, size_t tls_alignment) {
    master_tls_size = tls_size;
    master_tls_aligment = tls_alignment;

    if (master_tls_aligment < 8)
        master_tls_aligment = 8;

    master_tls_alloc_size = master_tls_size;
    if (master_tls_size % master_tls_aligment != 0) {
        master_tls_alloc_size -= master_tls_size % master_tls_aligment;
        master_tls_alloc_size += master_tls_aligment;
    }

    ThreadStruct* main_thread_tls = create_tls();

    set_current_thread_tls(main_thread_tls);
}

ThreadStruct* create_tls() {
    // Allocated tls
    size_t allocation_size = master_tls_alloc_size + sizeof(ThreadStruct);
    void* allocation = allocate_memory(allocation_size, master_tls_aligment);
    ThreadStruct* thread_struct = allocation + master_tls_alloc_size;
    void* tls = (void*)thread_struct - master_tls_size;

    // Copy master tls
    memcpy(tls, MASTER_TLS_LOCATION, master_tls_size);

    // Setup thread struct
    thread_struct->self_ptr = thread_struct;
    thread_struct->allocation_ptr = allocation;
    thread_struct->tls_ptr = tls;

    return thread_struct;
}

void destroy_tls(ThreadStruct* tls) { free_memory(tls->allocation_ptr); }

void set_current_thread_tls(ThreadStruct* tls) { system_call1(SET_TLS_BASE_SYSCALL, (uint64_t)tls); }
