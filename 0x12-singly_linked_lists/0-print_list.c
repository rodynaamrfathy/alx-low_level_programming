#include "lists.h"

/**
 * print_list -  a function that prints all the elements of a list_t list.
 * @h: singly linked list.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	list_t *ptr;

	if (h == NULL)
		printf("[0] (nil)");
	ptr = h;

	while (ptr != NULL)
	{
		printf("%s", ptr -> str);
		count++;
		ptr -> next;
	}

	return (count);
}
