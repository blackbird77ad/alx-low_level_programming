#include "main.h"

/**
 * _atoi - a function that convert a string to an integer.
 * @s: The pointer to be converted
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int nb = 0;
	int min = 1;
	int isi = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			min *= -1;
		}

		while (s[i] >= 48 && s[i] <= 57)
		{
			isi = 1;
			nb = (nb * 10) + (s[i] - '0');
			i++;
		}

		if (isi == 1)
		{
			break;
		}

		i++;
	}

	nb *= min;
	return (nb);
}
