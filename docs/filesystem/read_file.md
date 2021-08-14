# Read File
Read from a file descriptor

## Definition

```c
#include <los/filesystem.h>

isize read_file(usize fd, void* buffer, usize buffer_len);
```

## Description
**read_file()** reads up to *buffer_len* bytes from the file descriptor *fd* into *buffer*. If there are no more bytes to read, **read_file()** will return -1.

## Return Value
On success, if bytes were read, the number of bytes read is returned. If no bytes were read, -1 is returned.

On error, a negative number less than -1 corrisponding to the error is returned.

## Errors
 * **EBADD** - *fd* is not a valid file descriptor.
 * **EARGSEC** - *buffer* extends out of userspace.
 * **EWRONLY** - *fd* is not a readable file descriptor.

*Note:* **EDOM** will never be returned as an error because it conflicts with indicating end of file.
*Note:* **read_file()** calls driver functions, errors other than those described above may be returned.