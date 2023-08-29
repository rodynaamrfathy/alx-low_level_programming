#include "lists.h"

/**
 * add_nodeint_end -  a function that adds a new node at the end of a listint_t list.
 * @head: head of the list.
 * @n: no. to be added to new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nodeend;
	listint_t *ptr;

	new_nodeend = malloc(sizeof(listint_t));
	if (!head || !new_nodeend)
		return (NULL);
	new_nodeend->next = NULL;
	new_nodeend->n = n;
	if (!*head)
	{
		*head = new_nodeend;
		return (new_nodeend) ;
	}

	ptr = *head;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new_nodeend;

	return (new_nodeend);
}
