#ifndef __LOS_THREAD_H
#define __LOS_THREAD_H

#include <stdint.h>

typedef uint64_t ThreadID;
typedef int (*ThreadEntry)();

void exit_thread(uint64_t status);
uint64_t wait_thread(ThreadID id);
ThreadID create_thread(ThreadEntry entry);

#endif