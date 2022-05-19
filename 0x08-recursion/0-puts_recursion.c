#include "main.h"

/**
 * prints a string, followed by a new line
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	char c;
	
	c = *s;
	_putchar(c);
	if (c != '\0')
	{
		_puts_recursion(s + 1);
	}
	if (c == '\0')
		_putchar('\n');
}
