#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int offset;
	int i, num_of_bits;

	if (n == 0)
		_putchar('0');

	offset = n;
	num_of_bits = 0;
	while (offset > 0)
	{
		offset = offset >> 1;
		num_of_bits++;
	}

	offset = 0;
	offset = 1 << (num_of_bits - 1);
	i = 0;
	while (i < num_of_bits)
	{
		if ((n & offset) > 0)
			_putchar('1');
		else
			_putchar('0');
		i++;
		offset = offset >> 1;
	}
}
