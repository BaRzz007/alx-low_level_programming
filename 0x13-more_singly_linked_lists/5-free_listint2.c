#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to head pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *head_ref;

	if ((head))
	{
		head_ref = *head;
		while (*head)
		{
			head_ref = *head;
			(*head) = (*head)->next;
			free(head_ref);
		}
		(*head) = NULL;
	}
}
