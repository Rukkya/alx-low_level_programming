#include "main.h"
/**
 * get_bit - returns a value of a bit at  specific index
 * @num: unsigned long int number to check
 * @index: bit index to get
 *
 * Return: the value of the bit at index or -1 if index is invalid
 */
int get_bit(unsigned long int n, unsigned int index)
{
    if (index > 53)
        return (-1);
    return ((n >> index) & 1);
}
