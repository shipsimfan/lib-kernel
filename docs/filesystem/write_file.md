# Write File
Write to a file descriptor

## Definition

```c
#include <los/filesystem.h>

isize write_file(usize fd, void* buffer, usize buffer_len);
```

## Description
**write_file()** writes up to *buffer_len* bytes from *buffer* to the file descriptor *fd*. The write occurs at the current offset in the file. The offset is then incremented by the number of bytes written.

## Return Value
On success, the number of bytes written is returned.

On error, a negative number corrisponding to the error is returned.

## Errors
 * **EBADD** - *fd* is not a valid file descriptor.
 * **EARGSEC** - *buffer* extends out of userspace.
 * **ERDONLY** - *fd* is not a writable file descriptor.

*Note:* **write_file()** calls driver functions, errors other than those described above may be returned.