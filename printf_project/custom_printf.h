#ifndef CUSTOM_PRINTF_H
#define CUSTOM_PRINTF_H

int customPrintf(const char *formatString,...);

int printChar(char c);
int printString(const char *fortmatString,...);
char *numberToString(const char *str);
char *numberToBinary(unsigned int num);


#endif