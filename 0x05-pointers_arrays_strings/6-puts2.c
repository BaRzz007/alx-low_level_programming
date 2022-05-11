#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting from the first character,
 * followed by a new line
 * @str: string
 */
void puts2(char *str)
{
	int i, len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	i = 0;
	while (i <= len - 1)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
