#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to a 2 dimaensional array,
 * NULL on failure and if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = (int **) malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(p[j]);
			}
			free(p);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
