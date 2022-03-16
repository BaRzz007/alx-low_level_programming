#include "main.h"

/**
 * main - program to print alphabet
 *
 * Return: 0 if Success
 *
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		_putchar('\n');
	}
	return (0);
}
