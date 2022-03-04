#include <los/session.h>

#include <los/syscall.h>

isize get_session_processes(sid_t session, pid_t *buffer, usize buffer_len) {
    return system_call3(GET_SESSION_PROCESSES_SYSCALL, session, (usize)buffer,
                        buffer_len);
}