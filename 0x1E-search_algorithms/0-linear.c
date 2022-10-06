#include "search_algos.h"

/**
 * linear_search - Search an array of integers using linear
 * search algorithm
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value to find in array
 * Return: index of value if found, -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
