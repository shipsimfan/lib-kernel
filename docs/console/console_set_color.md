# Set Console Colors
Sets the console's colors

## Definition

```c
#include <los/console.h>

int64_t console_set_foreground(uint64_t color);
int64_t console_set_foreground_rgb(uint8_t red, uint8_t green, uint8_t blue);
int64_t console_set_background(uint64_t color);
int64_t console_set_background_rgb(uint8_t red, uint8_t green, uint8_t blue);
```

## Description
**console_set_foreground()** and **console_set_foreground_rgb()** set the console's foreground color for future writes. **console_set_foreground()** sets the color to *color* formatted as *0x00RRGGBB* where *RR* is the red, *GG* is the green, and *BB* is the blue. **console_set_foreground_rgb()** sets the color to the color formed by *red*, *green*, and *blue* components.

**console_set_background()** and **console_set_background_rgb()** set the console's background color for future writes. The parameters work the same as above.

If a console does not support full color, the driver of the console will attempt to approximate the color which was passed, but will not return an error relating to the color.

## Return Value
On success, all four functions return 0.

On error, a negative number corrisponding to the error is returned.

## Errors
 * **EINVSESSION** - The current process is not running in a console session.

 *Note:* All four functions call driver functions, errors other than those described above may be returned.