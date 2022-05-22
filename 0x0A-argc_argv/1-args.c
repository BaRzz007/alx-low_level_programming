#include <stdio.h>

/**
 * main - prints the number of arguments passed to the program
 * @argc: argument count
 * @argv: array of string atguments
 * Return: 0 if success
 */

int main (int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	argc--;
	printf("%d\n", argc);
	return (0);
}
