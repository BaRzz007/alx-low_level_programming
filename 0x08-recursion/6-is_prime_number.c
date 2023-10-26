#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is  prime number
 * or 0 if otherwise
 * @n: integer to be tested
 * Return: 1 if prime, 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}

/**
 * check_prime - check if a number is prime or not
 * @n: integer to be checked
 * @i: iterator
 * Return: 1 if prime, 0 if otherwise
 */
int check_prime(int n, int i)
{
	if (i > n / 2)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
}
