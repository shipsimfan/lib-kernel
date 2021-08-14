# Open Directory
Open a directory

## Definition

```c
#include <los/filesystem.h>

isize open_directory(const char* path);
```

## Description
**open_directory()** opens the directory at the location specified by *path*. **open_directory()** creates a new directory descriptor for the current process. A directory descriptor is a non-negative integer that can be passed to other **\*_directory()** functions. The directory descriptor is an iterator over a directory. The directory descriptor can be used by any thread in the process that created it. Directories cannot be removed while they are opened by a directory descriptor.

## Return Value
On success, the file descriptor is returned.

On error, a negative number corrisponding to the error is returned.

## Errors
 * **EARGSEC** - The *path* extends out of userspace.
 * **EILSEQ** - *path* is not valid UTF-8.
 * **EINVALIDARGUMENT** - *path* is an invalid path.
 * **ENOFS** - The filesystem specified in *path* does not exist.
 * **ENOTSUP** - The current process does not have a working directory.
 * **ENOENT** - The specified directory could not be found. *Note:* The path may be a file if this error is returned.

*Note:* **open_directory()** calls driver functions, errors other than those described above may be returned.
