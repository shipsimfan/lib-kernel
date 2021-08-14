# lib-kernel
*lib-kernel* is the library for [Lance OS](https://github.com/shipsimfan/los-rs) that contains c wrappers for system calls. *lib-kernel* is automatically linked into every application in Lance OS.

## Sections
*lib-kernel* divides the system calls into different sections each contained in their own header file. All of the sections can be included with `#include <los.h>`. The sections are:
 - [Console](console/index.md)
 - [Event](event/index.md)
 - [Filesystem](filesystem/index.md)
 - [Keycode](keycode/index.md)
 - [Memory](memory/index.md)
 - [Process](process/index.md)
 - [Thread](thread/index.md)
 - [Time](time/index.md)

## Other Headers
*lib-kernel* contains other headers which contain things beyond system calls.
 - [Errors](errors.md)
 - [Keycodes](keycode.md)
 - [System Call List](system_call.md)
 - [Types](types.md)