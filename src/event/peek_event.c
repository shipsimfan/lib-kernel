#include <los/event.h>

#include <los/syscall.h>

int64_t peek_event(Event* pevent) { return system_call1(PEEK_EVENT_SYSCALL, (uint64_t)pevent); }
