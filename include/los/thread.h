#ifndef __LOS_THREAD_H
#define __LOS_THREAD_H

#include "types.h"

typedef isize ThreadID;
typedef int (*ThreadEntry)();

__attribute__((noreturn)) void exit_thread(isize status);
isize wait_thread(ThreadID id);
ThreadID create_thread(ThreadEntry entry);

#endif