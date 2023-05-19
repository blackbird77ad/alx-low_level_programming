#include <stdio.h>
#include "main.h"

/**
 *main - prints the name of this programme.
 *@argc: number of arguments.
 *@argv: arrays of arguments.
 *Return: returns zero for success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);


	return (0);
}

