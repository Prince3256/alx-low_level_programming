#include <stdio.h>

/**
 * main - data type
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char p;
	int r;
	long int i;
	long long int n;
	float c;

	printf("Size of a char: %lu bytes(s)\n", sizeof(p));
	printf("Size of an int: %lu bytes(s)\n", sizeof(r));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(i));
	printf("Size of a long long int: %lu bytes(s)\n", sizeof(n));
	printf("Size of a float: %lu bytes(s)\n", sizeof(c));
	return (0);
}
