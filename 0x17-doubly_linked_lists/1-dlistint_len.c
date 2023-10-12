#include "lists.h"

/**
 * dlistint_len - a function that counts all the elements of a dlistint_t list.
 * @h: head of a doubly linked list
 *
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
