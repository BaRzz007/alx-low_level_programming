#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * mul - multiplies 2 integers
 * @num1: first number
 * @num2: second number
 * Return: value of the addition
 */
int mul(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * main - adds 2 integers
 * @argc: argument count
 * @argv: array of argument string
 * Return: 0 if success 1 if argument < 2
 */
int main(int argc, char *argv[])
{
	int i, j;

	(void)argc;
	(void)argv;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	printf("%d\n", mul(i, j));
	return (0);
}
