#include "main.h"

/**
 * puts_half - prints half of a string,
 * followed by a new line
 * @str: string
 */
void puts_half(char *str)
{
	int i, len;

	len = 0;
	while (*(str + len) != '\0')
	{
		len++;
	}
	if ((len - 1) % 2 == 0)
	{
		i = (len - 1) / 2;
		while (i != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		i = ((len - 1) / 2) + 2;
		while (i != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
