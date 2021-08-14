#ifndef __LOS_CONSOLE_H
#define __LOS_CONSOLE_H 1

#include "types.h"

#define CONOSLE_STYLE_RESET 0
#define CONSOLE_STYLE_BOLD 1
#define CONSOLE_STYLE_DIM 2
#define CONSOLE_STYLE_UNDERLINE 4
#define CONSOLE_STYLE_STRIKETHROUGH 8

isize console_write(const char* string, usize string_length);
isize console_write_ch(char character);
isize console_write_str(const char* string);
isize console_clear();
isize console_set_attribute(usize attribute);
isize console_set_foreground(usize color);
isize console_set_foreground_rgb(uint8_t red, uint8_t green, uint8_t blue);
isize console_set_background(usize color);
isize console_set_background_rgb(uint8_t red, uint8_t green, uint8_t blue);
isize console_set_cursor_pos(isize x, isize y);
isize console_get_width();
isize console_get_height();

#endif