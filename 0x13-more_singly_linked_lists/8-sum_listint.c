#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data(n) of a listint_t linked list
 * @head: pointer to head of the listint_t linked list
 * Return: Sum of all data of listint_t linked list
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t **ptr_head;

	ptr_head = &head;
	sum = 0;
	if (*ptr_head)
	{
		while (*ptr_head)
		{
			sum += (*ptr_head)->n;
			(*ptr_head) = (*ptr_head)->next;
		}
	}
	return (sum);
}
