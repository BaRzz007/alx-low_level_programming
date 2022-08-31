#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (!head)
		return;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->n);
		free(temp);
	}
}
