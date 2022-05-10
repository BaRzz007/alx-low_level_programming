#include "main.h"

/**
 * print_triangle - print a triangle, followed by a new line
 *
 * @size: sixe of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < size ; j++)
			{
				if (j < (size - i))
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
}
