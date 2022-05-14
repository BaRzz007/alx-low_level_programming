#include "main.h"

/**
 * cap_string - capitilizes all words of a string
 * @str: string
 * Return: pointer to the resulting string
 */
char *cap_string(char *str)
{
	int state, i, lower, upper, j;
	char sprtrs[13] =  {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
		'(', ')', '{', '}'};

	state = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (state == 0)
		{
			upper = 'A';
			for (lower = 'a'; lower <= 'z'; lower++)
			{
				if (str[i] == lower)
				{
					state = 1;
					str[i] = upper;
					break;
				}
				upper++;
			}
		}
		else if (state == 1)
		{
			for (j = 0; j <= 12; j++)
			{
				if (str[i] == sprtrs[j])
				{
					state = 0;
					break;
				}
			}
		}
	}
	return (str);
}
