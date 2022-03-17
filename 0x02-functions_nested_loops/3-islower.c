#include "main.h"

/**
 * _islower - checks if char is lower
 *
 * Return: 1 if lower otherwise 0
 *
 **/
int _islower(int c)
{
	if (c >= 'a' || c <= 'z')
	{
		return (1);
	}
	return (0);
}
