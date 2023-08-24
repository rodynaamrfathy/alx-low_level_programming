#include "lists.h"
#include <stdlib.h>

/**
 * list_len - a function that returns the number of
 * elements in a linked list_t list.
 * @h: list head.
 *
 * Return: umber of elements in a linked.
 */
size_t list_len(const list_t *h)
{
	size_t count;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
