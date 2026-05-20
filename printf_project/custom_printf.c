#include "custom_printf.h"
#include <stdarg.h>

int customPrintf(const char *formatString, ...){
    va_list args;
    int count = 0;

    if (formatString == NULL) {
        return printString("Error: String is Null");
    }

    va_start(args,formatString);

    va_end(args);

    return count;
}