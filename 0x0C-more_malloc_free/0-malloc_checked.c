#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: size
 * Return: terminates on failure with status 98
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		return (exit(98));
	}
	return (p);
}
