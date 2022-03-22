#ifndef __LOS_EVENT_H
#define __LOS_EVENT_H

#include "types.h"

#define EVENT_TYPE_KEY_PRESS 0
#define EVENT_TYPE_KEY_RELEASE 1

typedef struct {
    usize type;
    usize param1;
    usize param2;
} Event;

isize peek_event(Event* pevent);
isize poll_event(Event* pevent);

#endif