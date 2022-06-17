#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the size of a listint_t list
 * @h: pointer to head
 * Return: size of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t n;

	n = 0;
	if (h)
	{
		while (h)
		{
			n++;
			h = h->next;
		}
	}
	return (n);
}
