#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: string
 * @accept: accepted characters
 *
 * Return: number of bytes in the initial segment of s
 * which consist of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	int i, j;

	count = 0;
	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept [j])
			{
				count++;
				break;
			}
		}
	}
	return (count);
}
