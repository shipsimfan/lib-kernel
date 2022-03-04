#include <los/session.h>

#include <los/syscall.h>

sid_t get_session_id() { return system_call0(GET_SESSION_ID_SYSCALL); }