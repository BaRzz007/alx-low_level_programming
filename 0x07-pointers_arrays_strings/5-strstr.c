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
	int size, size1, count, pos;

	count = 0;
	for (size = 0; needle[size] != '\0'; size++)
		;
	for (size1 = 0; haystack[size1] != '\0'; size1++)
	{
		if (*needle == '\0')
			return (haystack);
		if (haystack[size1] == needle[count])
		{
			if (count == 0)
				pos = size1;
			count++;
			if (count == size)
			{
				return (haystack + pos);
			}
		}
		else if (haystack[size1] != needle[count])
		{
			count = 0;
		}
	}
	return (NULL);
}
