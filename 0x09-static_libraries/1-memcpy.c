#include "main.h"

/**
 * _memcpy - * _memcpy - function copies @n bytes from memory area @src
 *
 * @dest: 1st parameter
 *
 * @src: 2nd parameter
 *
 * @n: 3rd parameter
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}

	return (dest);
}
