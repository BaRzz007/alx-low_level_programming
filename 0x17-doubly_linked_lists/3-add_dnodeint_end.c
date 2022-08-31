#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t
 * @head: pointer to head pointer of dlistint_t
 * @n: node data
 * Return: address of new node, NULL if operation fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *head_ref, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (!(*head))
	{
		*head = new;
		return (new);
	}

	head_ref = *head;
	while (head_ref)
	{
		if (!((head_ref)->next))
		{
			(head_ref)->next = new;
			new->prev = (head_ref);
			break;
		}
		(head_ref) = (head_ref)->next;
	}
	return (new);
}
