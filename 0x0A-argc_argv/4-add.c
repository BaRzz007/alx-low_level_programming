#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * add - Adds positive numbers
 * @n: array of numbers
 * Return: result of the addition
 */
int add(int n, char *argv[])
{
	int sum, i;

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = sum + argv[i];
	}
	return (sum);
}

/**
 * main - add positive numbers followed by a new line,
 * prints 0 if no argument is passed,
 * prints Error if a non-digit is passed.
 *
 * @argc: argument count
 * @argv: array of string argument
 *
 * REturn: 0 if success, 1 if Error
 */
int main(int argc, char *argv[])
{
	int sum, i;

	sum = 0;
	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi
	}
}
