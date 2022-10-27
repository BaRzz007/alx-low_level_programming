#include "lists.h"

/**
 * add_dnodeint - add new node at the beginning of a dlistint_t list
 * @head: pointer to the head pointer of a dlistint_t list
 * @n: node date
 * Return: address of new node, NULL if operation fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head->prev = new;
	*head = new;

	return (new);
}
