#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to head pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *head_ref;

	head_ref = *head;
	if (*head)
	{
		while (*head)
		{
			 head_ref = *head;
			(*head) = (*head)->next;
			free(head_ref);
		}
		free(*head);
	}
}
