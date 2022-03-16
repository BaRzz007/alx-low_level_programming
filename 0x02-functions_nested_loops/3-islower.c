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
	if (islower(c))
		return (1);
	else
		return (0);
}
