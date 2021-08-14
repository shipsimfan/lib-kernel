#include <los/event.h>

#include <los/syscall.h>

isize peek_event(Event* pevent) { return system_call1(PEEK_EVENT_SYSCALL, (usize)pevent); }
