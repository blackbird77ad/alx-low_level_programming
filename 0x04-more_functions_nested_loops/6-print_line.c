#include "main.h"
/**
 * print_line - Entry point for a function thst draws straight lines
 * @n: number of times
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
