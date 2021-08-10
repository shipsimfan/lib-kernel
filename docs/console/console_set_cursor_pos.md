# Set Console Cursor Position
Sets the console's cursor's position

## Definition

```c
#include <los/console.h>

int64_t console_set_cursor_pos(int64_t x, int64_t y);
```

## Description
**console_set_cursor_pos()** sets the position of the cursor to *(x,y)*. All writes occur at the cursor.

## Return Value
On success, **console_set_cursor_pos()** returns 0.

On error, a negative number corrisponding to the error is returned.

## Errors
 * **EINVSESSION** - The current process is not running in a console session.
 * **ERANGE** - One of the provided coordinates is off the screen.

 *Note:* **console_set_cursor_pos()** calls driver functions, errors other than those described above may be returned.