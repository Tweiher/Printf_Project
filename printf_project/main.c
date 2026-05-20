#include <stdlib.h>
#include "custom_printf.h"

int main(void){

    int len;
     len = customPrintf("Hello World\n");
     customPrintf("len = %d\n\n", len);

     customPrintf("char test: %c\n",'A');
     customPrintf("string test: %s\n", "hello");
     customPrintf("number test: %d\n", 123);
     customPrintf("negative test: %i\n", -45);
     customPrintf("binary test: %b\n", 5);
     customPrintf("percent test: %%\n\n");

     customPrintf("null string test: %s\n", NULL);
     customPrintf("invalid test: %x\n");
     customPrintf("just percent: % \n\n");

    return 0;
}