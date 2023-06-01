#include <unistd.h>
#include "lists.h"

/**
 * print_list - This function prints all the elements of a linked list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
	{
		write(1, h->str, h->len);
		write(1, "\n", 1);
	}
	else
	{
	write(1, "[0] (nil)\n", 10);
	}

	h = h->next;
	count++;
	}

	return  (count);
}
