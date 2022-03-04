#ifndef __LOS_SESSION_H
#define __LOS_SESSION_H

#include "types.h"

typedef isize pid_t;
typedef isize sid_t;

typedef struct {
    usize num_threads;
    usize time;
    usize num_files;
    usize num_directories;
    char *working_directory;
    usize working_directory_len;
    char *name;
    usize name_len;
} process_t;

sid_t get_session_id();
isize get_session_processes(sid_t session, pid_t *buffer, usize buffer_len);
isize get_process_info(sid_t session, pid_t process, process_t *output);

#endif