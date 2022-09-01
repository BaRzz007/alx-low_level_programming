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
	dlistint_t *new, *head_ref;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (!(*h))
	{
		*h = new;
		return (new);
	}

	count = 0;
	head_ref = *h;
	while (head_ref)
	{
		if (count == idx)
		{
			new->next = head_ref;
			new->prev = head_ref->prev;
			(head_ref->prev)->next = new;
			head_ref->prev = new;
			return (new);
		}
		head_ref = head_ref->next;
	}
	return (NULL);
}
