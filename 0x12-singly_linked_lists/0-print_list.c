#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - prints all the items in a list
 * @h: pointer to the begining of the list to be printed
 * Return: the number of list elements
 */
size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		if (!(h->str))
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
