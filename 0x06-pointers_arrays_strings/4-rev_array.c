#include "main.h"

/**
 * reverse_array - Reverse the content of an array of integers
 * @a: array of integers
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int tmp, i, j;

	i = 0;
	j = n - 1;
	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
