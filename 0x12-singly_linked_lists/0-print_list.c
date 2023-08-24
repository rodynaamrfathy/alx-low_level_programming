#include "lists.h"

/**
 * print_list -  a function that prints all the elements of a list_t list.
 * @h: singly linked list.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("[%d] %s\n", h->str != NULL ? h->len : 0,
				h->str != NULL ? h->str : "(nil)");
		count++;
		h = h->next;
	}

	return (count);
}
