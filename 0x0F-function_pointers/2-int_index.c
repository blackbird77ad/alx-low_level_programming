#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: the array used.
 * @size: is the number of elements in the array array.
 * @cmp: is a pointer to the function to be used to compare values.
 *
 * Return: If no element matches, return -1 and If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
	if (array != NULL && cmp != NULL)
	{
	while (i < size)
	{
	if (cmp(array[i]))
	return (i);

	i++;
	}
	}
	}

	return (-1);
}
