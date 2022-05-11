#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: string pointer
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;
	char c;

	for (i = 0; c != '\0'; i++)
	{
		c = *(s + i);
	}
	i--;
	return (i);
}
