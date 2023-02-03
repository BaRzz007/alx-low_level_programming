#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked
 * dlistint_t list
 * @h: pointer to head of the list
 * Return: number of elements in a linked dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	len = 0;
	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
