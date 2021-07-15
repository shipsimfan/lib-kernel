#ifndef __LOS_PROCESS_H
#define __LOS_PROCESS_H

#include <stdint.h>

typedef uint64_t ProcessID;

uint64_t wait_process(ProcessID id);
ProcessID execute(const char* filepath);

uint64_t get_current_working_directory(char* buffer, uint64_t buffer_len);

#endif