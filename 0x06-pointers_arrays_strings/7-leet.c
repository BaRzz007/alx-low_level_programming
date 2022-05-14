#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 * Return: pointer to resulting string
 */
char *leet(char *str)
{
	char c[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't',
		'T', 'l', 'L'};
	char num[10] = {'4', '4', '3', '3', '0', '0', '7',
		'7', '1', '1'};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == c[j])
			{
				str[i] = num[j];
				break;
			}
		}
	}
	return (str);
}
