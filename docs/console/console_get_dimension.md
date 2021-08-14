# Get Console Dimension
Get the dimensions of the console

## Definition

```c
#include <los/console.h>

isize console_get_width();
isize console_get_height();
```

## Description
**console_get_width()** gets the width of the console in characters.

**console_get_height()** gets the height of the console in characters.

## Return Value
On success, **console_get_width()** returns the width of the console and **console_get_height()** returns the height of the console.

On error, a negative number corrisponding to the error is returned.

## Errors
 * **EINVSESSION** - The current process is not running in a console session.

 *Note:* **console_set_attribute()** calls driver functions, errors other than those described above may be returned.