#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		putchar((n % 10) + '0');
		n++;
	}
	n = 'a';
	while (n <= 'f')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
