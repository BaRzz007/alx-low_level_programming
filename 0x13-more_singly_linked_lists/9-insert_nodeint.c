#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: pointer to head pointer of the listint_t list
 * @idx: index
 * @n: Data
 * Return: Address of new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *head_ref, *temp;
	unsigned int idx_count;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	head_ref = *head;
	if (idx == 0)
	{
		temp = *head;
		*head = new_node;
		new_node->next = temp;
		return (new_node);
	}

	idx_count = 0;
	while ((head_ref) && (idx_count < idx))
	{
		if (idx_count == (idx - 1))
		{
			new_node->next = (head_ref)->next;
			(head_ref)->next = new_node;
			return (new_node);
		}
		(head_ref) = (head_ref)->next;
		idx_count++;
	}
	return (NULL);
}
