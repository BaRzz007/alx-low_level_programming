#include "main.h"

/**
 * _puts - prints a string followed by a new line to stdout
 * @str: string to be printed
 */
void _puts(char *str)
{
	int i;
	char c;

	for (i = 0; c != '\0'; i++)
	{
		c = *(str + i);
		_putchar(c);
	}
}
