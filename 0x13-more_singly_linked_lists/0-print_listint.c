#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the element of listint_t list
 * @h: head pointer
 * Return: size of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t n;

	if (h)
	{
		n = 0;
		while (h)
		{
			n++;
			printf("%d\n", h->n);
			h = h->next;
		}
	}
	return (n);
}
