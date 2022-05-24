#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - Creates an array of char and initializes it
 * with a specific char.
 * @size: size of the array
 * @c: character
 * Return: pointer to the array or NULL if size = 0 or it fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	int i;

	if (size < 1)
	{
		return (NULL);
	}
	p = malloc(size * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
