#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatinates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to newly allocated space which contains
 * content of s1 followed by s2 and a null terminated.
 * Null on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, size1, size2;
	char *p;

	i = j = 0;
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
			i++;
	}
	if (s2 != NULL)
	{
		while (s2[j] != '\0')
			j++;
	}
	p = malloc(sizeof(char) * (i + j + 1));
	if (p == NULL)
		return (NULL);
	size1 = size2 = 0;
	if (s1)
	{
		while (size1 < i)
		{
			p[size1] = s1[size1];
			size1++;
		}
	}
	if (s2)
	{
		while (size2 < (i + j))
		{
			p[size1] = s2[size2];
			size1++;
			size2++;
		}
	}
	p[size1] = '\0';
	return (p);
}
