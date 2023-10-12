#include "lists.h"

/**
* get_dnodeint_at_index - a function that returns the
* nth node of a dlistint_t linked list.
* @head: head of a doubly linked list
* @index: is the index of the node, starting from 0
*
* Return:  nth node of a dlistint_t linked list,if
* the node does not exist, return NULL.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *h;
	unsigned int i;

	h = head;
	for (i = 0; i < index; i++)
	{
		if (h == NULL)
			return (NULL);

		h = h->next;
	}
	return (h);
}
