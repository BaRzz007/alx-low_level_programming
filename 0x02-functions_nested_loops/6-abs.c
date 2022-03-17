#include "main.h"

/**
 * _abs - Returns the absolute value of it's parameter
 *
 * @n: Number to be converted
 *
 * Return: absolute of @n
 **/
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	return (n);
}
