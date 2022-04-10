#ifndef __LOS_PROCESS_H
#define __LOS_PROCESS_H

#include "types.h"

#define STDIO_TYPE_NONE 0
#define STDIO_TYPE_CONSOLE 1
#define STDIO_TYPE_FILE 2
#define STDIO_TYPE_PIPE_READER 3
#define STDIO_TYPE_PIPE_WRITER 4

typedef isize ProcessID;
typedef isize Mutex;

#pragma pack(push)
#pragma pack(1)

typedef struct {
    usize stdout_type;
    isize stdout_desc;
    usize stderr_type;
    isize stderr_desc;
    usize stdin_type;
    isize stdin_desc;
} StandardIO;

#pragma pack(pop)

__attribute__((noreturn)) void exit_process(isize status);
void kill_process(isize id);
void kill_thread(isize id);
isize wait_process(ProcessID id);

ProcessID execute(const char* filepath, const char** argv, const char** envp,
                  const StandardIO* stdio, bool inherit_signals);

isize get_current_working_directory(char* buffer, usize buffer_len);
isize set_current_working_directory(const char* path);

ProcessID get_process_id();

#endif