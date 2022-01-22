# Memory
The memory system calls allow a program to use the default heap implementation from the operating system. These system calls do not reach the kernel.

## Functions
The following functions are defined in `<los/memory.h>`:
 - [free_memory()](free_memory.md)
 - [allocate_memory()](allocate_memory.md)
 - [get_allocation_size()](get_allocation_size.md)