#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line,
 * but print fizz for multiples of 3 and buzz for multiples of 5
 *
 * Return: 0 if success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 3 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	return (0);
}
