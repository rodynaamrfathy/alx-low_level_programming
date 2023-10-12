#include "lists.h"

/**
 * free_dlistint -  a function that frees a dlistint_t list.
 * @head: list head.
 *
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h;

	while (head != NULL)
	{
		h = head;
		head = head->next;
		free(h);
	}
}
