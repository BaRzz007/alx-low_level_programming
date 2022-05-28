#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers
 * @min: size of small array
 * @max: size of big array
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int i, size;
	int *p;

	if (min > max)
		return (NULL);

	size = min + max + 1;

	p = malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		p[i] = min++;
	}
	
	return (p);
}
