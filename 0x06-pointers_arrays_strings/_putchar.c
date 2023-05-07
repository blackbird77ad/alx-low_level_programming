#include "main.h"
#include <unistd.h>

/**
 *_putchar - prints a char to the stdout.
 * @c: The character to be printed.
 *Return: Function return 1 on success and -1 on error.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
