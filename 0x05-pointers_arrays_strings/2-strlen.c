#include "main.h"
/**
 *_strlen - a function to return the length of a string.
 *@s: the string.
 *Return: length.
 */

int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
	length++;
	return (length);
}
