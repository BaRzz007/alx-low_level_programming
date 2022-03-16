#include "main.h"

/**
 * print_alphabet - function to print alphabet
 *
 * Return: 0 if Success
 *
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		_putchar('\n');
	}
}
