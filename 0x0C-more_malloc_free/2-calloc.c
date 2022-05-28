#include <stdlib>
#include "main.h"

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: number of elements in the array
 * @size: size of each array element
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (i = nmemb; i < size; i++)
		p[i] = 0;

	return (p);
}
