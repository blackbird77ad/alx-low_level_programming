#include "main.h"

/**
 * checker - checks if two strings are identical.
 * @s1: Parameter 1.
 * @s2: Parameter 2
 * @i: Parameter 3
 * @j: Parameter 4
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int checker(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
	return (1);
	if (s1[i] == s2[j])
	return (checker(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
	return (checker(s1, s2, i, j + 1));
	if (s2[j] == '*')
	return (checker(s1, s2, i + 1, j) || checker(s1, s2, i, j + 1));
	return (0);
}

/**
 * wildcmp - check if strings could be considered identical
 * @s1: base address for string.
 * @s2: base address for string.
 *
 * Return: 1 if are considered identical.
 */

int wildcmp(char *s1, char *s2)
{
	return (checker(s1, s2, 0, 0));
}
