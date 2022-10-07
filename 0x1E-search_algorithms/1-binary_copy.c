#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using binary search algorithm
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: vaalue to be searched
 *
 * Return: index of the where value is located, -1 if not found
 * or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	int m;

	i = 0;
	while (i < size)
	{
		print_arr(array, size, i);
		m = ((size - 1) + i) / 2;
		/*count = i;
		while (count  < (size - 1))
		{
			printf("%d, ", array[count]);
			count++;
		}
		printf("%d\n", array[count]);*/

		if (value > array[m])
		{
			i = m + 1;
		}
		else if (value < array[m])
		{
			size = m;
		}
		else
		{
			return (m);
		}
	}
	return (-1);
}

/**
 * print_arr - prints array
 * @array: pouinter to first element of the array
 * @end_idx: end index
 * @idx: start index
 */
void print_arr(int *array, size_t end_idx, size_t idx)
{
	size_t i;

	printf("Searching in array: ");
	for (i = idx; i < end_idx; i++)
	{
		if (i == idx)
			printf("%d", array[i]);
		else
			printf(", %d", array[i]);
	}
	printf("\n");
}
