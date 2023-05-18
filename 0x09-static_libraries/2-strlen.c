#include <stdio.h>
#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: character
 * Return: void
 */

int _strlen(char *s)
{
	int n = 0;

	for (; *s++;)
	n++;
	return (n);
}

