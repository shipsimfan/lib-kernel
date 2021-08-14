# Read Directory
Read a directory

## Definition

```c
#include <los/filesystem.h>

#define DIRENT_TYPE_DIRECTORY
#define DIRENT_TYPE_FILE

typedef struct {
    char name[256];
    size_t type;
    size_t size;
} Dirent;

int64_t read_directory(uint64_t dd, Dirent* dest);
```

## Description
**read_directory()** reads a directory entry into *dest* from the directory descriptor *dd* and increaments the iterator behind *dd*.

The *name* field of *dest* contains a null-terminated string with the name of the file or directory. The *size* field of *dest* contains the size of the file in bytes, or 0 if the entry is a directory. The *type* field of *dest* can be either:
 * *DIRENT_TYPE_DIRECTORY* - This entry is a directory
 * *DIRENT_TYPE_FILE* - This entry is a file

## Return Value
Upon successfully reading a directory entry, **read_directory()** returns 1.
If there are no more entries to read, **read_directory()** returns 0.

On error, a negative number corrisponding to the error is returned.

## Errors
 * **EARGSEC** - *dest* extends out of userspace.
 * **EBADD** - *dd* is a invalid directory descriptor.