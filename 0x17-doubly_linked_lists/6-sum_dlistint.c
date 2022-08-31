include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t linked list
 * @head: head pointer
 * Return: sum of all the data of a dlistint_t linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
