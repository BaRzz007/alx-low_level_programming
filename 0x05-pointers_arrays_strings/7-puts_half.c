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
	len--;
	if ((len % 2) == 0)
	{
		i = len / 2;
		while (i <= len)
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		i = (len / 2) + 2;
		while (i <= len)
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
