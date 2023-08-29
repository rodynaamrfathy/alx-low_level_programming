#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: lists head.
 *
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *pop;
	int n;

	if (!head)
		return (0);
	pop = (*head)->next; /*get adress of head then el next bt3ha*/
	n = (*head)->n;
	free(*head);
	*head = pop;
	return (n);
}
