#include "main.h"
#include <stdio.h>

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: a character in the function.
 * @b: Second character in the function.
 * @n: unsigned integer.
 * Return: returns s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
	s[j] = b;
	j++;
	}

	return (s);
}
