#ifndef __LOS_EVENT_H
#define __LOS_EVENT_H

#include <stdint.h>

typedef struct {
    uint64_t type;
    uint64_t param1;
} Event;

uint64_t peek_event(Event* pevent);

#endif