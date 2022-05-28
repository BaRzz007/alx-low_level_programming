#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
	unsigned int i, len1, len2;
	char *p;

	len1 = len2 = 0;
	if (s1)
		len1 = strlen(s1);
	if (s2)
		len2 = strlen(s2);

	if (n >= len2)
		p = malloc((sizeof(char) * len1) +
				(sizeof(char) * len2) + 1);
	else
		p = malloc((sizeof(char) * len1) +
				(sizeof(char) * n) + 1);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (; i < n; i++)
		p[i] = s2[n];

	return (p);
}
