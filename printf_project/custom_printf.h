#ifndef CUSTOM_PRINTF_H
#define CUSTOM_PRINTF_H

#include <stdarg.h>

int customPrintf(const char *formatString,...);
int handleSpecifier(char specifier, va_list args);
int printChar(char c);
int printString(const char *str);
char *numberToString(int num);
char *numberToBinary(unsigned int num);


#endif