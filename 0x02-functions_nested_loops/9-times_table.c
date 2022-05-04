#include "main.h"

/*
 * times_table - prints multiplication table up to nine
 */
void times_table (void)
{
	int i, j, result;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			result = i * j;
			_putchar(result + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
