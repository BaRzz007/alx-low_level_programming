#include "main.h"

/**
 * swap_int - Swaps the values to two integers
 * @a: first pointer
 * @b: second pointer
 */
void swap_int(int *a, int *b)
{
	int temp1;

	temp1 = *a;
	*a = *b;
	*b = temp1;

}
