#include <stdio.h>

/**
 * print_name - Prints a name
 * @name: char to be printed
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
