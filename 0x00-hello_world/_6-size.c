#include <stdio.h>

int main(void)
{
	int num;

	num = 10;	
	printf("size of a num: %d bytes(s)\n", sizeof(num));

	printf("size of a char: %d bytes(s)\n", sizeof(char));
	printf("size of a int: %d bytes(s)\n", sizeof(int));
	printf("size of a long int: %d bytes(s)\n", sizeof(long int));
	printf("size of a long long int: %d bytes(s)\n", sizeof(long long int));
	printf("size of a float: %d bytes(s)\n", sizeof(float));

	return (0);
}
