#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: index to be returned
 * Return: node at nth index or NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;
	listint_t **ptr2head;

	ptr2head = &head;
	if (*ptr2head)
	{
		n = 0;
		while (*ptr2head)
		{
			if (n == index)
				return (*ptr2head);
			*ptr2head = (*ptr2head)->next;
			n++;
		}
	}
	return (NULL);
}
