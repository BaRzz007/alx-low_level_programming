#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sums all of it's parameters
 * @n: Number of parameters expected
 * Return: Sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list args;

	va_start(args, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_args(args, int);
	va_end(args);
	return (sum);
}
