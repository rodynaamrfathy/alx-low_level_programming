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
	const list_t *ptr;

	if (h == NULL)
		printf("[0] (nil)\n");
	ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
			ptr = ptr->next;
			count++;
		}
		printf("[%d] %s\n", ptr->len, ptr->str);
		count++;
		ptr = ptr->next;
	}

	return (count);
}
