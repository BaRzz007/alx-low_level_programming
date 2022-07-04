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
	listint_t *prev_node;
	unsigned int index_count;

	if(!(*head))
		return (-1);

	index_count = 0;
	while ((*head) && index_count <= index)
	{
		if (index_count == index)
		{
			prev_node->next = (*head)->next;
			(*head) = NULL;
			free(*head);
			return (1);
		}
		prev_node = *head;
		(*head) = (*head)->next;
		index_count++;
	}
	return (-1);
}
