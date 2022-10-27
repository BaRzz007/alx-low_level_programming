#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: pointer to head pointer
 * @idx: index where node is to be added, index starts at 0 :)
 * @n: node data
 * Return: address of new node, NULL if function fails or idx > length of list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (!h)
	{
		*h = new;
		return (new);
	}

	count = 0;
	current = *h;
	while (current)
	{
		if (count == idx)
		{
			new->next = current;
			new->prev = current->prev;
			(current->prev)->next = new;
			current->prev = new;
			return (new);
		}
		current = current->next;
	}
	return (NULL);
}
