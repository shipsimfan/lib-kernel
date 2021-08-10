# Console
The console system calls allow a program to control and print to a console. These system calls are only availble to a process running in a console session.

## Functions
The following functions are defined in `<los/console.h>`:
 - [console_write()](console_write.md) - Writes an array of bytes to the console
 - [console_write_ch()](console_write.md) - Writes a character to the console
 - [console_write_str()](console_write.md) - Writes a null-terminated string to the console
 - [console_clear()](console_clear.md) - Clears the console
 - [console_set_attribute()](console_set_attribute.md) - Sets or clears console attributes
 - [console_set_foreground()](console_set_color.md) - Sets the current foreground of the console
 - [console_set_foreground_rgb()](console_set_color.md) - An alternative to `console_set_foreground()`
 - [console_set_background()](console_set_color.md) - Sets the current background of the console
 - [console_set_background_rgb()](console_set_color.md) - An alternative to `console_set_background()`
 - [console_set_cursor_pos()](console_set_cursor_pos.md) - Sets the current cursor position
 - [console_get_width()](console_get_dimension.md) - Returns the width of the console
 - [console_get_height()](console_get_dimension.md) - Returns the height of the console