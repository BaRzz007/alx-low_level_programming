#include "main.h"

/**
 * _strcat - concatinates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	i = 0;
	while (dest[i] != '\0')
	{
		src[len] = dest[i];
		i++;
		len++;
	}
	return (dest);
}
