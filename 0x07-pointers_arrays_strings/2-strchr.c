#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: character to be searched for
 * Return: pointer to first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
			break;
		}
		if (s[i] == 0)
		{
			return (NULL);
		}
	}
}