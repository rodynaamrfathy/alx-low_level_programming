#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all
 * the data (n) of a dlistint_t linked list.
 * @head: head of a list.
 *
 * Return: the sum of all the data (n) of a dlistint_t linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *h;
	int sum = 0;

	h = head;
	while (head != NULL)
	{
		sum += h->n;
		h = h->next;
	}

	return (sum);
}
