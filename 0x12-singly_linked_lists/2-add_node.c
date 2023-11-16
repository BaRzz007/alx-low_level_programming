#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds node at the beginning of a list_t list.
 * @head: pointer to a list_t pointer
 * @str: string data
 * Return: pointer to a memory location for new list_t
 * node or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	(*head) = new;
	return (new);
}
