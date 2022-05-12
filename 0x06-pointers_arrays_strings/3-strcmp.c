#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: Integer less than, equal to, or greater than zero
 * depending on if s1 is less than, equal to or greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, value;

	for (i = 0; *(s1 + i) != '\0'; i++)
		;
	for (j = 0; *(s2 + j) != '\0'; j++)
		;
	value = i - j;
	return (value);
}
