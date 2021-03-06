#include <los/thread.h>

#include "tls.h"
#include <los/memory.h>
#include <los/syscall.h>

#define STACK_SIZE 32 * 1024 * 1024

typedef struct {
    void* stack_top;
    ThreadEntry entry;
    ThreadStruct* tls;
} ThreadEntryContext;

extern void thread_entry(void* context);

ThreadID create_thread(ThreadEntry entry) {
    ThreadEntryContext* context = (ThreadEntryContext*)allocate_memory(sizeof(ThreadEntryContext), 8);
    context->stack_top = (void*)(((usize)allocate_memory(STACK_SIZE, 16)) + STACK_SIZE);
    context->tls = create_tls();
    context->entry = entry;

    return system_call2(CREATE_THREAD_SYSCALL, (usize)thread_entry, (usize)context);
}