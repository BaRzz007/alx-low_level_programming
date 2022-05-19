#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix to be printed
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = sum2 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 = sum1 + *(a + ((size * i) + j));
			}
			if ((i + j) == (size - 1))
			{
				/*printf("%d, ", *(a + ((size * i) + j)));*/
				sum2 = sum2 + *(a + ((size * i) + j));
			}
		}
		/*sum1 = sum1 + *(a + (size * i + i));*/
	}
	printf("%d, %d\n", sum1, sum2);
}
