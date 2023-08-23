#include "main.h"
/**
 * get_bit - returns a value of a bit at  specific index
 * @num: unsigned long int number to check
 * @index: bit index to get
 *
 * Return: the value of the bit at index or -1 if index is invalid
 */
int get_bit(unsigned long int num, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8)
        return (-1);

    return ((num >> index) & 1);
}
