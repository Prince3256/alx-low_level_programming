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

	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(p));
	printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(r));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(n));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(c));
	return (0);
}
