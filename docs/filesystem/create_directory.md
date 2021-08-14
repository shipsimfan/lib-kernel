# Create Directory
Create a directory

## Definition

```c
#include <los/filesystem.h>

int64_t create_directory(const char* path);
```

## Description
**create_directory()** creates a new directory at *path*.

## Return Value
On success, 0 is returned.

On error, a negative number corrisponding to the error is returned.

## Errors
 * **EARGESC** - *path* extends out of userspace.
 * **EILSEQ** - *path* is not valid UTF-8.
 * **EINVALIDARGUMENT** - *path* is an invalid path.
 * **ENOFS** - The filesystem specified in *path* does not exist.
 * **ENOTSUP** - The current process does not have a working directory.
 * **EEXIST** - *path* already exists.

*Note:* **open_file()** calls driver functions, errors other than those described above may be returned.
