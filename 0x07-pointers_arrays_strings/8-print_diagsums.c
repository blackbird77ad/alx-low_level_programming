#include "main.h"
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: first parameter
 * @size: second parameter
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int b, c, i, j = 0, k = 0;

	for (b = 0; b < size; b++)
	{
		i = (b * size) + b;
		j += *(a + i);
	}
	for (c = 0; c < size; c++)
	{
		b = (c * size) + (size - 1 - c);
		k += *(a + i);
	}
	printf("%i, %i\n", i, k);
}
