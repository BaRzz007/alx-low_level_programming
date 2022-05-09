#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: length of line in integers
 */
void print_line(int n)
{
	while (n >= 0)
	{
		if (n == 0)
			_putchar('\n');
		else
			_putchar('_');
		_putchar('\n');
		n--;
	}
}
