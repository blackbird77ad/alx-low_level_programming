#include <stdio.h>

/**
 * main - entry point:alphabet in reverse.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
		putchar(l);
	putchar('\n');

	return (0);
}
