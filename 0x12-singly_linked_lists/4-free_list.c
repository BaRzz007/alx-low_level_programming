#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: pointer to head of list_t list
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head)
	{
		while (head)
		{
			temp = head;
			head = head->next;
			free(temp->str);
			free(temp);
		}
	}
}
