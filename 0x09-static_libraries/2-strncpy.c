#include "main.h"

/**
 *_strncpy - a function that copies a string.
 * @src: variable for source
 * @dest: variable for destination
 * @n: int length
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int a;

	for (a = 0; a < n && *(src + a); a++)
	{
		*(dest + a) = *(src + a);
	}
	for (; a < n; a++)
	{
	*(dest + a) = '\0';
	}
	return (dest);

}
