#include "lists.h"

/**
 * free_listint2 -  a function that frees a listint_t list.
 * @head: head of the list.
 *
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *node1, *node2;

	if (!head)
		return;
	node1 = *head;
	while (node1)
	{
		node2 = node1->next;
		free(node1);
		node1 = node2;
	}
	*head = NULL;
}
