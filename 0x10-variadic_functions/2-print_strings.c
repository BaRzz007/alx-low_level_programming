#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line.
 * @seperator: string to be printed between strings
 * @n: number of string arguments passed to function
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *c;

	va_start(args, n);
	if (n > 0)
	{
		if (!seperator)
			seperator = "";
		c = va_arg(args, char *);
		if (!c)
			c = "(nil)";
		printf("%s", c);
		for (i = 1; i < n; i++)
		{
			c = va_arg(args, char *);
			if (!c)
				c = "(nil)";
			printf("%s%s", seperator, c);
		}
	}
	va_end(args);
	printf("\n");
}
