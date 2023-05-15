#include "main.h"
#include <stdio.h>

/**
   * _print_rev_recursion- a function that prints a string in reverse.
    * @s: Parameter in a function
     * Return: 0
      */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	return;
	}
	_print_rev_recursion(s + 1);

	printf("%c", *s);
}
