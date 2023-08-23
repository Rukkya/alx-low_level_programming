#include "main.h"
/**
  * clear_bit - sets the value of a bit to 0 at a given index
  * Return: 1 if it worked or -1 otherwise
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
    int c;

    if (index > 53 || !n)
        return (-1);
    c = 1 << index;
    *n = (*n & ~c) | ((0 << index) & c);
    return (1);
}

