#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Executes a function on each element of a given array
 * @size: size of the array
 * @array: array
 * @action: pointer to the function to be used
 */
void array_iterator(int *array, size_t size, void (*action)(int elem))
{
	size_t i;

	if (action && array)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
