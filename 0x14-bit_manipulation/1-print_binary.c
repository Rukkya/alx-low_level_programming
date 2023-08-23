#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @num: unsigned long int to be printed in binary
 *
 * Return: void
 */
void print_binary(unsigned long int num)
{
    if (num > 1)
        print_binary(num >> 1);
    putchar((num & 1) + '0');
}
