#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion_aid - Second function
 * @a: Parameter
 * @b: starting value
 * Return: -1 or 1
 */

int _sqrt_recursion_aid(int a, int b)
{
	if (a * a == b)
	{
	return (a);
	}
	if (a * a > b)
	{
	return (-1);
	}
	return (_sqrt_recursion_aid(a + 1, b));
}

/**
 * _sqrt_recursion - function that returns the natural square
 * root of a number.
 * @n: Parameter
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
	return (0);
	}
	return (_sqrt_recursion_aid(1, n));
}
