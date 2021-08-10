# lib-kernel
*lib-kernel* is the library for [Lance OS](https://github.com/shipsimfan/los-rs) that contains c wrappers for system calls. *lib-kernel* is automatically linked into every application in Lance OS.

## Sections
*lib-kernel* divides the system calls into different sections each contained in their own header file. The sections are:
 - [Console](console/index.md)
 - [Event](event/index.md)
 - [Filesystem](filesystem/index.md)
 - [Keycode](keycode/index.md)
 - [Memory](memory/index.md)
 - [Process](process/index.md)
 - [Thread](thread/index.md)
 - [Time](time/index.md)

## Errors
A list of all system call errors and their descriptions can be found [here](error.md)