#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the
 * data (n) of a listint_t linked list.
 * @head: head of list.
 *
 * Return: returns the sum of all the data (n),
 * if the list is empty, return 0.
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	if (!head)
		return (0);
	for (ptr = head; ptr; ptr = ptr->next)
		sum += ptr->n;
	return (sum);
}
