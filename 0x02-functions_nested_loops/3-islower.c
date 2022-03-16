#include <stdio.h>
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

	check = islower(c);
	if (check == 1)
		return (1);
	else
		return (0);
}
