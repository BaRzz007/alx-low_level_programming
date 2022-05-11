#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
	}
	while ((i - 1) >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
}
