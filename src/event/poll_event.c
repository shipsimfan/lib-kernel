#include <los/event.h>

#include <los/syscall.h>

isize poll_event(Event* pevent) {
    return system_call1(POLL_EVENT_SYSCALL, (usize)pevent);
}
