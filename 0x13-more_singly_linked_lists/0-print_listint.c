#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * h: head of the singly linked list
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	
	if (h)
	{
		while (h)
		{
			count++;
			printf("%d\n", h->n);
			h = h->next;
		}
	}

	return (count);
}
