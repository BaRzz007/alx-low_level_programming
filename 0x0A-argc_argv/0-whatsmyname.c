#include <stdio.h>
#include "main.h"

/**
 * funcwhatsmyname - prints the name of the program
 * @s: array of strings
 */
void funcwhatsmyname(char *s[])
{
	printf("%s\n", s[0]);
}

/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv: array of strings
 * Return: 0 if success
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	(void)argc;
	funcwhatsmyname(argv);
	return (0);
}
