# Seek File
Seek to a position in a file.

## Definition
```c
#include <los/filesystem.h>

#define SEEK_FROM_START
#define SEEK_FROM_CURRENT
#define SEEK_FROM_END

int64_t seek_file(uint64_t fd, uint64_t offset, uint64_t seek_from);
```

## Description
**seek_file()** sets the position of a file descriptor *fd* based on the value of *seek_from*:
 * *SEEK_FROM_START* - Sets the position to *offset* bytes
 * *SEEK_FROM_CURRENT* - Sets the position to *offset* bytes plus the current position
 * *SEEK_FROM_END* - Sets the position to *offset* bytes plus the file size

## Return Value
On success, the new position of the file descriptor is returned.

On error, a negative number corrisponding to the error is returned.

## Errors
 * **EBADD** - *fd* is not a valid file descriptor.