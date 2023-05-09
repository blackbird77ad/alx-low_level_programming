#include "main.h"

/**
 * _strstr - Writes a function that locates a substring.
 * @haystack: the first parameter
 * @needle: the first occurrence of the substring
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b] && (haystack[a] == needle[0]))
		{
			if (haystack[a + b] == needle[b])
				b++;
			else
				break;
		}
		if (needle[j])
		{
			a++;
			b = 0;
		}
		else
			return (haystack + a);
	}
	return (0);
}
