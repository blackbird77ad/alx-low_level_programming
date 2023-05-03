#include "main.h"
/**
 * print_array -  a function that prints n elements of an array of integers
 *, followed by a new line.
 *@a: the array of int
 *@n: the number of elements of the array.
 *Return: function returns void.
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
	if (j != (n - 1))
	{
		printf(",");
		printf(" ");
	}
	}
	printf("\n");
}
