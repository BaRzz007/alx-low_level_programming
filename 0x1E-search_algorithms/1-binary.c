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
	size_t i, count;
	int m;

	i = 0;
	while (i < size)
	{
		printf("Searching in array: ");
		count = i;
		while (count  < (size - 1))
		{
			printf("%d, ", array[count]);
			count++;
		}
		printf("%d\n", array[count]);

		m = (i + size) / 2;
		if (value > array[m])
			i = m + 1;
		else if (value < array[m])
			size = m - 1;
		else
			return (array[m]);
	}
	return (-1);
}
