#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: integer representation of the number of diagonals
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
		for (i = 0; i < n; i++)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
		}
}
