#include "main.h"
/**
 * binary_to_uint - converts a binary number to an int
 * @bin: binary number as a string
 *
 * Return: unsigned int or NULL
 */
unsigned int binary_to_uint(const char *bin)
{
    unsigned int deci = 0;

    if (!bin)
        return (0);
    for (; *bin != '\0'; bin++)
    {
        if (*bin != '0' && *bin != '1')
            return (0);
        deci = deci << 1;
        if (*bin == '1')
            deci += 1;
    }
    return (deci);
}
