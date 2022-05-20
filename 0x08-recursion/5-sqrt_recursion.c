#include "main.h"

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: number to find square root of
 * Return: square root of number n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_func(n, 0));
}

/**
 * sqrt_func - checks(recursively) and returns the square root
 * of a given number
 * @n: number
 * @i: iterator
 * Return: square root of a given number
 */
int sqrt_func(int n, int i)
{
	if (n == 0)
		return (-1);
	if (n == 1)
		return (1);
	if (i * i > n)
		return (-1);
	if ((i * i) - n == 0)
		return (i);
	return (sqrt_func(n, i + 1));
}
