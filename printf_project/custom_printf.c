#include "custom_printf.h"
#include <stdarg.h>

int customPrintf(const char *formatString, ...){
    va_list args;
    int count = 0;
    int i = 0;
    if (formatString == NULL) {
        return printString("Error: formatString is Null");
    }

    va_start(args,formatString);

    while (formatString[i] != '\0'){
        if (formatString[i] == '%'){
            i++;
            if (formatString[i]=='\0'){
                count += printChar('%');
                break;
            }
            if (formatString[i] == 'c' ||
                formatString[i] == 's' ||
                formatString[i] == 'd' ||
                formatString[i] == 'i' ||
                formatString[i] == 'b' ||
                formatString[i] == '%'){
            count += handleSpecifier(formatString[i], args);
                }
        }
        else{
            count += printChar(formatString[i]);
        }
        i++;
    }
    va_end(args);

    return count;
}