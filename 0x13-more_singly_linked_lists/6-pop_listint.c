#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head of a listint_t linked
 * list and returns the head node's data
 * @head: pointer to the head pointer of the list
 * Return: head node's data or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	n = 0;

	if (head != NULL && (*head) != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		n = temp->n;
	}
	return (n);
}
