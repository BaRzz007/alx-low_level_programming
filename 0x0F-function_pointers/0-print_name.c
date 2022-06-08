#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - Prints a name
 * @name: char to be printed
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	int len;
	char *p_name;

	len = strlen(name);
	p_name = malloc(sizeof(char) * (len + 1));
	strcpy(p_name, name);

	p_name[len + 1] = '\0';

	(*f)(p_name);
}
