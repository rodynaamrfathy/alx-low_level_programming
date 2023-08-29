#include "lists.h"

/**
 * add_nodeint -  a function that adds a new node at the
 * beginning of a listint_t list.
 * @head: list head.
 * @n: integer.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!head || !new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	if (!*head)
		new_node->next = NULL;
	*head = new_node;
	return (*head);
}
