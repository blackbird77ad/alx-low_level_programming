#include "main.h"

/**
 * _strpbrk - a function to search a string for any of a set of bytes
 *
 * @s: first parameter
 *
 * @accept: second parameter
 *
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int a;
		while (*s)
		{
			for (a = 0; accept[a]; a++)
			{
				if (*s == accept[a])
					return (s);
			}
			s++;
		}
	return (NULL);
}
