#include "main.h"

/**
 * _islower - checks if char is lower
 *
 * Return: 1 if lower otherwise 0
 *
 **/
int _islower(int c)
{
	int check;

	check = 'a';
	while (check <= 'z')
	{
		if (check == c)
			return (1);
		else
			return (0);
	}
	return (0);
}
