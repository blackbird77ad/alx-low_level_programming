#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 * @str: string
 * Return: Length of string
 */
void _puts(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
