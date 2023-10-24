#include "main.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to char
 * @s: pointer to string
 * @to: value to be changed to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
