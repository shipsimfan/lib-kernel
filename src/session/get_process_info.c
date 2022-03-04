#include <los/session.h>

#include <los/syscall.h>

isize get_process_info(sid_t session, pid_t process, process_t *output) {
    return system_call3(GET_PROCESS_INFO_SYSCALL, session, process,
                        (usize)output);
}