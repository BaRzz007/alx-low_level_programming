#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination memory area
 * @src: source memory area
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, size;

	size = n;
	for (i = 0; i < size; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
