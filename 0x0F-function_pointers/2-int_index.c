#include "function_pointers.h"

/**
 * int_index - Returns index to the first element in array
 * that matches the int argument of the comparison
 * function
 * 
 * @array: array of int elements
 * @size: size of array
 * @cmp: compare function
 *
 * Return: index of the first element for which the cmp function
 * does not return 0
 */
int int_index(int *arr, int size, int (*cmp)(int num))
{
	int i, flag;

	if (size <= 0)
		return (-1);
	if (arr && cmp)
	{
		for (i = 0; i < size; i++)
		{
			flag = cmp(arr[i]);
			if (flag == 1)
				return (i);
		}
	}
	return (-1);
}
