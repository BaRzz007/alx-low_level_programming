#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: pointer to the head pointer of the list_t list
 * @str: string data.
 * Return: pointer to new memory location
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	last = (*head);
	new->next = NULL;
	new->str = strdup(str);
	new->len = strlen(str);

	if (!(*head))
	{
		(*head) = new;
		return (new);
	}
	while (last)
	{
		if (last->next == NULL)
		{
			last->next = new;
			break;
		}
		else
			last = last->next;
	}
	return (new);
}
