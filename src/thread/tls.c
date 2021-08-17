#include "tls.h"

#include <los/memory.h>
#include <los/syscall.h>

usize master_tls_size;
usize master_tls_alloc_size;
usize master_tls_aligment;

void* __memcpy(void* dest, const void* src, usize n) {
    char* ptr1 = dest;
    const char* ptr2 = src;
    for (usize i = 0; i < n; i++, ptr1++, ptr2++)
        *ptr1 = *ptr2;

    return dest;
}

void initialize_tls(usize tls_size, usize tls_alignment) {
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
    usize allocation_size = master_tls_alloc_size + sizeof(ThreadStruct);
    void* allocation = allocate_memory(allocation_size, master_tls_aligment);
    ThreadStruct* thread_struct = allocation + master_tls_alloc_size;
    void* tls = (void*)thread_struct - master_tls_size;

    // Copy master tls
    __memcpy(tls, MASTER_TLS_LOCATION, master_tls_size);

    // Setup thread struct
    thread_struct->self_ptr = thread_struct;
    thread_struct->allocation_ptr = allocation;
    thread_struct->tls_ptr = tls;

    return thread_struct;
}

void destroy_tls(ThreadStruct* tls) { free_memory(tls->allocation_ptr); }

void set_current_thread_tls(ThreadStruct* tls) { system_call1(SET_TLS_BASE_SYSCALL, (usize)tls); }
