#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @c: string
 *
 * Return: pointer object to the resulting string
 */
char *string_toupper(char *c)
{
	int i, upper, lower;

	for (i = 0; c[i] != '\0'; i++)
	{
		upper = 'A';
		lower = 'a';
		while (lower <= 'z')
		{
			if (c[i] == lower)
			{
				c[i] = upper;
				break;
			}
			lower++;
			upper++;
		}
	}
	return (c);
}
