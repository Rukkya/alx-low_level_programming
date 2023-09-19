#include "main.h"
/**
 * binary_to_uint - converts a binary number to an  int
 * @b: binary number as a string
 *
 * Return: unsigned int b, or 0 if b is invalid / NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ans = 0;

	if (!b)
		return (0);
	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);
		ans = ans << 1;
		if (*b == '1')
			ans += 1;
	}
	return (ans);
}

