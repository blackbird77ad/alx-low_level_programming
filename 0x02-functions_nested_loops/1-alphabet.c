#include "main.h"

/**
 *main - entry point
 *print_alphabet: print alphabet function.
 *Return: always
 */

void print_alphabet(void);
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
