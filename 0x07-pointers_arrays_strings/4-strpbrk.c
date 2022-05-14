#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: String to be searched
 * @accept: accepted set of bytes
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, match;

	match = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match = 1;
				break;
			}
		}
		if (match == 1)
			break;
	}
	return (s + i);
}
