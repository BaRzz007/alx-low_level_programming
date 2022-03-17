#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: parameter of function _print_sign to be tested
 *
 * Return: 1 if number is +ve, 0 if number is zero and -1 if nnumber is -ve
 *
 **/
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
		_putchar('0')
	return (0);
}
