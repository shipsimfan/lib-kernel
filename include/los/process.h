#ifndef __LOS_PROCESS_H
#define __LOS_PROCESS_H

#include <stdint.h>

typedef int64_t ProcessID;

void exit_process(int64_t status);
int64_t wait_process(ProcessID id);
ProcessID execute(const char* filepath, const char** argv, const char** envp);

int64_t get_current_working_directory(char* buffer, uint64_t buffer_len);
int64_t set_current_working_directory(const char* path);

#endif