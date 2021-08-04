#ifndef __LOS_CONSOLE_H
#define __LOS_CONSOLE_H

#include <stdint.h>

#define CONOSLE_STYLE_RESET 0
#define CONSOLE_STYLE_BOLD 1
#define CONSOLE_STYLE_DIM 2
#define CONSOLE_STYLE_UNDERLINE 4
#define CONSOLE_STYLE_STRIKETHROUGH 8

int64_t console_write(const char* string, uint64_t string_length);
int64_t console_write_ch(char character);
int64_t console_write_str(const char* string);
int64_t console_clear();
int64_t console_set_attribute(uint64_t attribute);
int64_t console_set_foreground(uint64_t color);
int64_t console_set_foreground_rgb(uint8_t red, uint8_t green, uint8_t blue);
int64_t console_set_background(uint64_t color);
int64_t console_set_background_rgb(uint8_t red, uint8_t green, uint8_t blue);
int64_t console_set_cursor_pos(int64_t x, int64_t y);
int64_t console_get_width();
int64_t console_get_height();

#endif