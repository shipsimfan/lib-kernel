#ifndef __LOS_CONSOLE_H
#define __LOS_CONSOLE_H

#include <stdint.h>

int64_t console_write(char character);
int64_t console_write_str(const char* string);
int64_t console_clear();

#endif