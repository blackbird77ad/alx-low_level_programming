#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - this returns the numbers of elements in the linked list.
 * @h: a pointer to the head of a list
 * Return: number of nodes.
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
	h = h->next;
	}
	return (count);
}
