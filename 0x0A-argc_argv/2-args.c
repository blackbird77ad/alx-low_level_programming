#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments received
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: array of arguments
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
