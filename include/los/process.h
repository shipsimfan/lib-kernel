#ifndef __LOS_PROCESS_H
#define __LOS_PROCESS_H

#include <stdint.h>

typedef uint64_t ProcessID;

uint64_t wait_process(ProcessID id);
ProcessID execute(const char* filepath);

#endif