#include "custom_printf.h"
#include <stdlib.h>
#include <unistd.h>

int printChar(char c)
{
    write(1, &c, 1);
    return 1;
}

int printString(const char *str)
{
    int count = 0;

    if (str == NULL)
    {
        str = "(null)";
    }

    while (str[count] != '\0')
    {
        write(1, &str[count], 1);
        count++;
    }

    return count;
}

char *numberToString(int num)
{
    char temp[12];
    char *result;
    int i = 0;
    int j = 0;
    int isNegative = 0;

    if (num == 0)
    {
        result = malloc(2);
        if (result == NULL)
        {
            return NULL;
        }

        result[0] = '0';
        result[1] = '\0';
        return result;
    }

    if (num < 0)
    {
        isNegative = 1;
        num = -num;
    }

    while (num > 0)
    {
        temp[i] = (num % 10) + '0';
        num = num / 10;
        i++;
    }

    result = malloc(i + isNegative + 1);
    if (result == NULL)
    {
        return NULL;
    }

    if (isNegative)
    {
        result[j] = '-';
        j++;
    }

    while (i > 0)
    {
        i--;
        result[j] = temp[i];
        j++;
    }

    result[j] = '\0';

    return result;
}

char *numberToBinary(unsigned int num)
{
    char temp[32];
    char *result;
    int i = 0;
    int j = 0;

    if (num == 0)
    {
        result = malloc(2);
        if (result == NULL)
        {
            return NULL;
        }

        result[0] = '0';
        result[1] = '\0';
        return result;
    }

    while (num > 0)
    {
        temp[i] = (num % 2) + '0';
        num = num / 2;
        i++;
    }

    result = malloc(i + 1);
    if (result == NULL)
    {
        return NULL;
    }

    while (i > 0)
    {
        i--;
        result[j] = temp[i];
        j++;
    }

    result[j] = '\0';

    return result;
}




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