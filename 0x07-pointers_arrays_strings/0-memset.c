#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * with the constant byte b
 * @n: bytes of memory
 * @b: constant
 * @s: string
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i, size;

	size = n;
	for (i = 0; i < size; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
