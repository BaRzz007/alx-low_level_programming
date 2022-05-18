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

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 = sum1 + a[i][j]; /* or *(a + (i + j)) */
			else if ((i + j) == size)
				sum2 = sum2 + a[i][j];
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
