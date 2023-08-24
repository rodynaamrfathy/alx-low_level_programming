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
	const list_t *ptr;

	if (h == NULL)
		printf("[0] (nil)\n");
	ptr = h;

	while (ptr != NULL)
	{
		printf("[%d] %s\n", ptr->len, strlen(ptr->str) != 0 ? ptr->str : (nil));
		count++;
		ptr = ptr->next;
	}

	return (count);
}
