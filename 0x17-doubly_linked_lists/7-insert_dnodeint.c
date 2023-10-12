#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts
 * a new node at a given position.
 * @h: head.
 * @idx: is the index of the list where the new node
 * should be added. Index starts at 0
 * @n: element valu.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new_node;
	int i, list_len;

	if (h == NULL)
		return (NULL);

	current = *h;

	new_node = malloc(sizeof(dlistint_t))
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}

	list_len = dlistint_len(current);
	if (idx == list_len)
	{
		new_node = add_dnodeint_end(h, n);
		return (new_node);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (current == NULL)
			return (NULL);

		current = current->next;
	}

	new_node->prev = current;
	current = current->next;
	new_node->next = current;

	return (new_node);
}
