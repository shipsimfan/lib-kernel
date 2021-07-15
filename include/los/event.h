#ifndef __LOS_EVENT_H
#define __LOS_EVENT_H

#include <stdint.h>

#define EVENT_TYPE_KEY_PRESS 0
#define EVENT_TYPE_KEY_RELEASE 1

typedef struct {
    uint64_t type;
    uint64_t param1;
    uint64_t param2;
} Event;

uint64_t peek_event(Event* pevent);

#endif