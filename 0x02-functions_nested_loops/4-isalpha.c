#include "main.h"

/**
 * _isalpha - Checks if character is uppercase
 *
 * @c: param to be tested
 *
 * Return: 1 if @c is alphabet, otherwise 0
 *
 **/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
