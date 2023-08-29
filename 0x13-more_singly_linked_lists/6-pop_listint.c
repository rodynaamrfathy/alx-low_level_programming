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

	pop = malloc(sizeof(listint_t));
	if (!head)
		return (0);
	pop->next = (*head)->next;
	pop->n = (*head)->next;
	free(*head);
	return (pop->n);
}
