#include "main.h"

/**
 * _strncpy - Copies n numbers of strings from src to dest
 * @src: source string
 * @dest: destination string
 *
 * Return: character pointer of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len;

	for (len = 0; src[len] != '\0' && len < n; len++)
	{
		dest[len] = src[len];
	}
	while (len < n)
	{
		dest[len] = '\0';
	}
	return (dest);
}
