#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * string_nconcat - Concatinates two strings
 * @s1: First string
 * @s2: Second string
 * @n: number of bytes from the second string
 * Return: pointer to newly allocated space in memory
 * containing s1 followed by the first n bytes of s2 and a null terminator,
 * return NULL if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *p;

	len1 = len2 = 0;
	if (s1)
		len1 = strlen(s1);
	if (s2)
		len2 = strlen(s2);

	if (n < len1)
		p = malloc(sizeof(char) * (len1 + n + 1));
	else
		p = malloc(sizeof(char) * (len1 + len2 + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (j = 0; j < n && j < len2; j++)
	{
		p[i] = s2[j];
		i++;
	}
	p[i] = '\0';

	return (p);
}
