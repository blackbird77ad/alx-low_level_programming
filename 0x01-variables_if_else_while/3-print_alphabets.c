#include <stdio.h>
/**
 * main - Entry point for putchar command
 *
 * Return: value set to zero (success)
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
	}
	while (n <= 90)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
