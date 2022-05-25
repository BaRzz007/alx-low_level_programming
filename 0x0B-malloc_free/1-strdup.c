#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup -Returns a pointer to a newly allocated space
 * in memorywhich contains a copy of the string
 * given as parameter
 *
 * @str:String param
 *
 * Return: pointer to a new string which duplicates str.
 * Null if iinsufficient memory was available
 */
char *_strdup(char *str)
{
	char *p;
	int i, size;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		;
	p = malloc(sizeof(str));
	if (p == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}
	p[i] = '\0';
	return (p);
}
