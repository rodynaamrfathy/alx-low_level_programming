#include "lists.h"

/**
 * get_nodeint_at_index -  a function that returns the nth
 * node of a listint_t linked list.
 * @head: linked list head.
 * @index: index of node.
 *
 * Return:  nth node of a listint_t linked list,if the node
 * does not exist, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	for (i = 0, ptr = head; ptr && i < index ; ptr = ptr->next,i++)
		;
	return (ptr);
}
