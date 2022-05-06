#include "main.h"

/*
 * times_table - prints 9 times table, starting from 0
 */
void times_table(void)
{
	int i, j, result;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			result = i * j;
			if (j == 0)
			{
				_putchar(result + '0');
			}
			else if (result < 10 && j != 0)
			{
				_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			if  (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
