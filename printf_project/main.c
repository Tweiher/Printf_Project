#include <stdlib.h>
#include "custom_printf.h"

int main(void)
{
    char *decimal;
    char *binary;

    printString("Testing printChar: ");
    printChar('A');
    printChar('\n');

    printString("Testing printString: ");
    printString("Hello Brandon helpers!");
    printChar('\n');

    decimal = numberToString(42);
    if (decimal != NULL)
    {
        printString("Testing numberToString: ");
        printString(decimal);
        printChar('\n');
        free(decimal);
    }

    binary = numberToBinary(5);
    if (binary != NULL)
    {
        printString("Testing numberToBinary: ");
        printString(binary);
        printChar('\n');
        free(binary);
    }

    return 0;
}