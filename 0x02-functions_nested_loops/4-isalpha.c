#include "main.h"

/**
 * _isalpha - Checks if a c is alphabetic.
 * @c: The character to be checked.
 *
 * Return: 1 if c is letter, lowercase or uppercase, else return 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
