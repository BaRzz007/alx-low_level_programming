#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char cl, cu;

	cl = 'a';
	while (cl <= 'z')
	{
		putchar(cl);
		cl++;
	}
	cu = 'A';
	while (cu <= 'Z')
	{
		putchar(cu);
		cu++;
	}
	putchar('\n');
	return (0);
}
