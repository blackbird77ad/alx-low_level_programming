#include "main.h"

/**
 *_strlen - a function to return the length of a string.
 *@s: the string.
 *Return: length.
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\n')
	{
	longi++;
	s++;
	}
	return (longi);
}
