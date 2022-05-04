#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 *
 * Return: 0 if success
 **/
void jack_bauer(void)
{
	int i, j, k, l;

	i = 0;
	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			k = 0;
			while(k < 60)
			{
				l = 0;
				while (l < 60)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
