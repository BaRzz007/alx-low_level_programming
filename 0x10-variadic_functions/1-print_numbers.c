#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers, followed by a new line.
 * @seperator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (seperator)
	{
		printf("%d", va_arg(args, int));
		for (i = 1; i < n; i++)
		{
			printf("%s%d", seperator, va_arg(args, int));
		}
	}
	else if (!seperator)
	{
		for (i = 0; i < n; i++)
			printf("%d", va_arg(args, int));
	}
	printf("\n");
}
