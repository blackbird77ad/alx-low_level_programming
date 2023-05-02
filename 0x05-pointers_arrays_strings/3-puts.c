#include "main.h"

/**
   * _puts -prints a string with a newline on to the standard output.
    * @str: the string to be printed out.
     */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
