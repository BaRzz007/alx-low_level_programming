#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers to 98
 * @n: param
 */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
}
