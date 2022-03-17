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

	last_n = n % 10;
	_putchar(last_n);
	return (0);
}