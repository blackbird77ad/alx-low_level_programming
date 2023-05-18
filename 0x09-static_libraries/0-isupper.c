#include <stdio.h>
#include "main.h"
/**
 * _isupper - Checks if c is uppercase
 * @c: character to check
 * Return: 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
