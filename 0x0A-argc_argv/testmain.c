#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (_atoi(argv[i]) == '!')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + _atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}

int _atoi(char *p)
{
	int i, n;

	n = 0;
	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] >= '0' && p[i] <= '9')
			n = (10 * n) + (p[i] - '0');
		else
			return ('!');
	}
	return (n);
}
