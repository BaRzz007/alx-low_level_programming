#include "main.h"

/**
 * _strncat - Concatinates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of byte to be used from src
 *
 * Return: pointer to destination string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;
	while (*(dest + len) != '\0')
	{
		len++;
	}
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
