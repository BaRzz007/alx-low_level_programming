#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments recieved on the command line
 * @argc: argument count
 * @argv: array of string arguments
 * Return: 0 if success
 */
int main(__attribute__((unused))int argc, __attribute__((unused))char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
