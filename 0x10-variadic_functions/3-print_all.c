#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints all argunment passed to it
 * @format: format string
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list args;
	char *str, *seperator = "";

	if (format)
	{
		va_start(args, format);
		i = 0;
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", seperator, va_arg(args, int));
					break;
				case 'i':
					printf("%s%i", seperator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", seperator, va_arg(args, double));
					break;
				case 's':
					if (!(str = va_arg(args, char *)))
						str = "(nil)";
					printf("%s%s", seperator, str);
					break;
				default:
					i++;
					continue;
			}
			seperator = ", ";
			i++;
		}
	}
	printf("\n");
}
