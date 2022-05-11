#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i, j;
	char *temp;

	temp = s;
	for (i = 0; *(s + i) != '\0'; i++)
	{
	}
	j = 0;
	while ((i - 1) >= 0)
	{
		s[j] = *(temp + i);
		i--;
		j++;
	}
}
