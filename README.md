
# Printf project


## Discription
In this assingment we are tasked with creating a customer Printf function to handle Format specifies (c, s, d, i, b, %) and non specifiers. This is group project that will be created by Those listed in the contributors section. 
## Contributors
Project lead: Ty Weiher \
Project contributor: Brandon Serna 

## Requirements 
- Implement custom version of printf() that is a veriatic function, able to handle format specefiers.
- You may use standard C Libraries such as : <stdio.h>, <stdlib.h>, <stdrag.h>, and <unistd.h>
- Fucntion should be able to handle format specefies c, s, d, i, b, % and nonspecefiers
- Invalid format specefiers should be ignored.
- One use of a switch-case statement
- Function should include basic error handling to control for null arguments
- Function should be named customPrintf()
- Returns the total number of characters printed
- Uses dynamic memory allocation
- Complies with strict compilation flags to enforce clean and error free code.
- Memory allocation must be used when neccesary particularly for handling formatted output. 

## Sample output
```
Character: A 
String: Hello, World!
Integer: Decimal: 42
Binary: 101
Percent sign: %
Nonspecifier
Error: formatString is NULL
```
## Explanation

This porject is a custom version of printf(). It prints regular text and handles format specifiers like %c, %s, %d, %i, %b, and %%. 

The program will read the format strings oe character at a time. So when it encounters the % sign, it checks the next charatcer to determine what to print. We used if statements in order to cycle through the format specifiers. 

The helper functions help keep code organized. The printChar() function prints a single character, The printString() function prints a string, and the number-conversion functions turn the decimal and the binary values into strings. Because we used malloc() inside of the functions, we freed the memory after printing to avoid memory leaks. The program also handles NULL values and returns the total number of characters printed. 
## Conclusion

This project helped us understand how the printf() function actually works. We also learned more about working as a team and collaborating through github. We practiced using variadic functions, helper functions, pointers, and dynamic memory. 

The final program prints characters, strings, integers, binary numbers, percent signs, and regular text. We also tested using Valgrind and confirmed there were no memory leaks. 