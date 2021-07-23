#include <los/thread.h>

#include <los/memory.h>
#include <los/syscall.h>

#define STACK_SIZE 32 * 1024 * 1024

typedef struct {
    void* stack_top;
    ThreadEntry entry;
} ThreadEntryContext;

extern void thread_entry(void* context);

ThreadID create_thread(ThreadEntry entry) {
    ThreadEntryContext* context = (ThreadEntryContext*)allocate_memory(sizeof(ThreadEntryContext));
    context->stack_top = (void*)(((uint64_t)allocate_memory(STACK_SIZE)) + STACK_SIZE);
    context->entry = entry;

    return system_call2(CREATE_THREAD_SYSCALL, (uint64_t)thread_entry, (uint64_t)context);
}