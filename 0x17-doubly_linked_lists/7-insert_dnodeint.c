#include "lists.h"
#include <stdlib.h>

/**
 * dlist_len - a function that counts all the elements of a dlistint_t list.
 * @h: head of a doubly linked list
 *
 * Return: the number of nodes.
 */
unsigned int dlist_len(const dlistint_t *h)
{
	unsigned int list_len = 0;

	while (h != NULL)
	{
		h = h->next;
		list_len++;
	}

	return (list_len);
}

/**
 * insert_dnodeint_at_index - a function that inserts
 * a new node at a given position.
 * @h: pointer to a pointer to the head.
 * @idx: the index of the list where the new
 * node should be added. Index starts at 0.
 * @n: element value.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new_node;
	unsigned int i, list_len;

	if (h == NULL)
		return (NULL);

	current = *h;
	list_len = dlist_len(current);

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}

	if (idx > list_len)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	for (i = 0; i < (idx - 1); i++)
	{
		current = current->next;
	}

	new_node->prev = current;
	new_node->next = current->next;

	if (current->next != NULL)
		current->next->prev = new_node;

	current->next = new_node;

	return (new_node);
}
