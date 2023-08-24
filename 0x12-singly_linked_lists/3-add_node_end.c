#include "lists.h"
#include <string.h>

/**
 * add_node_end - a function that adds a new node at the end of a list_t list.
 * @head: head oh the list.
 * @str: string to be add to the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node_end;
	list_t *ptr;

	new_node_end = malloc(sizeof(list_t));
	if (!head || !new_node_end)
		return (NULL);

	if (str)
	{
		new_node_end->str = strdup(str);
		if (!new_node_end->str)
		{
			free(new_node_end);
			return (NULL);
		}
		new_node_end->len = strlen(str);
		new_node_end->next = NULL;
	}
	if (!*head)
	{
		*head = new_node_end;
		return (new_node_end);
	}

	ptr = *head;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next  = new_node_end;

	return (new_node_end);
}
