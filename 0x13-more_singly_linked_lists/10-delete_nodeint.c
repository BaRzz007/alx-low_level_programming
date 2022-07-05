#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at index
 * @head: pointer to head pointer
 * @index: index of node to be deleted
 * Return: 1 if success, -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *head_ref, *temp;
	unsigned int index_count;

	if (!(head))
		return (-1);

	head_ref = *head;
	if (index == 0 && *head != NULL)
	{
		temp = (*head);
		(*head) = (*head)->next;
		free(temp);
		temp = NULL;
		return (1);
	}
	else
	{
		index_count = 0;
		while ((head_ref) && index_count < index)
		{
			if (index_count == (index - 1))
			{
				temp = head_ref->next;
				head_ref->next = head_ref->next->next;
				free(temp);
				temp = NULL;
				return (1);
			}
			(head_ref) = (head_ref)->next;
			index_count++;
		}
	}
	return (-1);
}
