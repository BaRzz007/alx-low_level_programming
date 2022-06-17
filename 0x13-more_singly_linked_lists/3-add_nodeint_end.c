#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: pointer to head pointer
 * @n: int data
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last, *new_node;

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = NULL;

	last = *head;
	if (!(*head))
	{
		(*head) = new_node;
		return (new_node);
	}
	while (last)
	{
		if (!last->next)
		{
			last->next = new_node;
			break;
		}
		last = last->next;

	}
	return (new_node);
}
