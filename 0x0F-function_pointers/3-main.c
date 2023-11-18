#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - simple calculator program
 * @argc: argument count
 * @argv: list of arguments
 * Return: 0 if success,
 * 98 if wrong number of arguments,
 * 99 if not_arith_op,
 * 100 if divide by 0 error.
 */
int main(int argc, char *argv[])
{
	int result;
	int (*action)(int, int);
	char c;

	if (argc < 4)
	{
		printf("Error\n");
		return (98);
	}

	action = get_op_func(argv[2]);
	if (!action)
	{
		printf("Error\n");
		return (99);
	}

	c = (*argv[2] + 0);
	if ((c == '/' || c == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = action(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
