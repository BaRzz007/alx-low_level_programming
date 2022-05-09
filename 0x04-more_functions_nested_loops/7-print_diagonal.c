#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: integer representation of the number of diagonals
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= o)
	{
		_putchar('\n');
	}
	else
		for (i = 1; i < n; i++)
		{
			j = i;
			while (j < 0)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
		}
}
