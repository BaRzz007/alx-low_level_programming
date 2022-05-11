#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int len, len1, i;
	char temp;

	for (len = 0; *(s + len) != '\0'; len++)
	{
	}
	len1 = len - 1;
	i = 0;
	while (i < len / 2)
	{
		temp = s[i];
		s[i] = s[len1];
		s[len1] = temp;
		len1--;
	}
}
