#include "main.h"
/**
  * print_binary - converts a decimal number to binary
  * @n: integer to be  converted
  */
void print_binary(unsigned long int xn)
{
    int var, flag;

    if (xn == 0)
        _putchar('0');
    for (flag = 0, var = sizeof(xn) * 8 - 1; var >= 0; var--)
    {
        if ((xn >> var) & 1)
            flag = 1;
        if (flag == 1)
            ((xn >> var) & 1) ? _putchar('1') : _putchar('0');
    }
}
