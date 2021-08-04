#ifndef __LOS_PROCESS_H
#define __LOS_PROCESS_H

#include <stdint.h>

#define STDIO_TYPE_NONE 0
#define STDIO_TYPE_CONSOLE 1
#define STDIO_TYPE_FILE 2

typedef int64_t ProcessID;
typedef int64_t Mutex;

#pragma pack(push)
#pragma pack(1)

typedef struct {
    uint64_t stdout_type;
    int64_t stdout_desc;
    uint64_t stderr_type;
    int64_t stderr_desc;
    uint64_t stdin_type;
    int64_t stdin_desc;
} StandardIO;

#pragma pack(pop)

__attribute__((noreturn)) void exit_process(int64_t status);
void kill_process(int64_t id);
int64_t wait_process(ProcessID id);

ProcessID execute(const char* filepath, const char** argv, const char** envp, const StandardIO* stdio);

int64_t get_current_working_directory(char* buffer, uint64_t buffer_len);
int64_t set_current_working_directory(const char* path);

Mutex create_mutex();
int64_t lock_mutex(Mutex mutex);
int64_t unlock_mutex(Mutex mutex);

#endif