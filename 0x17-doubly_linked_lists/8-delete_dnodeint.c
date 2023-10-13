#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes the node at index index
 * of a dlistint_t linked list.
 * @head: head.
 * @index: index of nodes you want to delete.
 *
 * Returns: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *to_del, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		prev = current;
		current = current->next;
		if (current == NULL)
			return (-1);
	}
	
	to_del = current;
	prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = prev;

	free(to_del);
	return (1);
}
