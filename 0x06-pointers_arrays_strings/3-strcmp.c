#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: a pointer to the first string to be compared
 * @s2: a pointer to the second string to be compared
 * Return: if s1 < s2, negative diff
 * if s1 = s2, 0
 * if s1 > s2, positive diff
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
