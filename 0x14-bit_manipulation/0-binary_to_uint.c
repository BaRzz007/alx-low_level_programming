#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of "1"s and "0"s to be converted
 * Return: 0 if any char in string b contains is not 0 or 1,
 * and if b is NULL, else return the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted, place_value;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	i--;
	converted = 0;
	place_value = 1;
	while (i >= 0)
	{
		if (b[i] == '1')
		{
			converted = converted + place_value;
		}
		place_value = 2 * place_value;
		i--;
	}
	return (converted);
}
