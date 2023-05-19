#include <stdio.h>
#include "main.h"

/**
 *main - prints the number of arguments passed to the  programme.
 *@argc: number of arguments.
 *@argv: array of argumen.
 *Return: always return zero for success.
 */
int main(int argc, char *argv[])
{
(void) argv; /*this ignores argv*/
	printf("%d\n", argc - 1);

	return (0);
}

