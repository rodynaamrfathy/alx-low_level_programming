#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint - a function that adds a new node of a dlistint_t list.
* @head: pointer to a pointer to the head of a doubly linked list
* @n: int of new node
*
* Return: the address of the new element, or NULL if it failed.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
