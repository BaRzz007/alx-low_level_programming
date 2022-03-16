#include "main.h"

/**
 * print_alphabet_x10 - Funtion to print alphabet ten times
 *
 **/
void print_alphabet_x10(void)
{
	char text;
	int count;

	count = 0;
	while (count <= 10)
	{
		text = 'a';
		while (text <= 'z')
		{
			_putchar(text);
			text++;
		}
		_putchar('\n');
		count++;
	}
}
