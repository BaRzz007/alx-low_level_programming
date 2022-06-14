#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: pointer to the head of the list
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	while (h)
		n++;
	return (n);
}
