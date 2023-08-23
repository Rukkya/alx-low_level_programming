#include "main.h"
/**
  * conversion - converts chars to integers
  * @c: char to be converted
  * Return: converted integer
  */
inline unsigned int conversion(char c)
{
    return ((unsigned int) c - '0');
}
/**
  * _strlen - calculates the length of the string
  * @input: input
  * Return: length of string
  */
inline unsigned int _strlen(const char *input)
{
    int i;
    for (i = 0; input[i]; i++){
    return (i);}
    return(0);
}
/**
  * binary_to_uint - converts a string which is binary num basically to a decimal integere output
  * @bin: the binary number
  * Return: unsigned deci number
  */
inline unsigned int binary_to_uint(const char *binn)
{
    int i;
    unsigned int deci, var1, exp;

    if (!binn)
        return (0);
    deci = var1 = 0;
    exp = 1;
    for (i = _strlen(binn) - 1; binn[i]; i--, exp *= 2)
    {
        if (binn[i] != '0' && binn[i] != '1')
            return (0);
        var1 = conversion(binn[i]);
        deci += var1 * exp;
    }
    return (deci);
}
