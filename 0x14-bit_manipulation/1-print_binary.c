#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned int offset;
	int i;

	if (n == 0)
		_putchar('0');
	offset = 1 << 31;
	i = 0;
	while (i < 32)
	{
		if ((n & offset) != 0)
		{
			while (i < 32)
			{
				if ((n & offset) != 0)
					_putchar('1');
				else
					_putchar('0');
				i++;
				offset = offset >> 1;
			}
		}
		else
		{
			i++;
			offset = offset >> 1;
		}
	}
}
