#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - a function that prints all
 * the elements of a dlistint_t list.
 * @h: head of a doubly linked list
 *
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *print_d;
	int count = 0;

	print_d = h;
	while (print_d != NULL)
	{
		printf("%d\n", print_d->n);
		print_d = print_d->next;
		count++;
	}

	return (count);
}
