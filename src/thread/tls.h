#ifndef __TLS_H
#define __TLS_H

#include <los/types.h>

#define MASTER_TLS_LOCATION ((void*)0x700000000000)

typedef struct ThreadStruct_t {
    struct ThreadStruct_t* self_ptr;
    void* allocation_ptr;
    void* tls_ptr;
} ThreadStruct;

void initialize_tls(usize tls_size, usize tls_alignment);

ThreadStruct* create_tls();
void destroy_tls(ThreadStruct* tls);

void set_current_thread_tls(ThreadStruct* tls);

#endif