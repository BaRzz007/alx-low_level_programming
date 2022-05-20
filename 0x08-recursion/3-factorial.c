#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: integer number
 * Return: factorial of a given number,
 * -1 if n < 0, and 1 if n = 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
