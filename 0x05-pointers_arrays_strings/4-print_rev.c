#include "main.h"

/**
 * print_rev - print a string, in reverse,
 * followed by a new line
 * @s: String to be reversed
 */
void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
