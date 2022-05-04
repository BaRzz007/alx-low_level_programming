#include "main.h"

/**
 * print_last_digit - Function prints last digit of a number
 *
 * @n: parameter stores value of number to be operated
 *
 * Return: 0 if success
 *
 */
int print_last_digit(int n)
{
	int last_n;

	if (n < 0)
	{
		n = 2 * (n * (-1)) + n;
	}
	last_n = n % 10;
	return (last_n);
}
