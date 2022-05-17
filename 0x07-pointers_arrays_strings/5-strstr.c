#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring in a string
 * @haystack: the HAYSTACK
 * @needle: the NEEDLE
 * Return: pointer to the begining of the located substring,
 * or null if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int size, size1, i, count;

	for (size = 0; needle[size] != '\0'; size++)
		;
	for (size1 = 0; haystack[size1] != '\0'; size1++)
		;
	count = 0;
	for (i = 0; i <= size1; i++)
	{
		if (haystack[i] == needle[count])
		{
			if (count == size)
			{
				return (haystack + i);
				break;
			}
			count++;
		}
		else if (haystack[i] != needle[count])
		{
			count = 0;
		}
	}
	if (count == size)
		return (haystack + i);
	else
		return (NULL);
}
