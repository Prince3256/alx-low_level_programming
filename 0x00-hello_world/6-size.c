#include <stdio.h>

/**
 * main - print out c data type
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char c;
	int d;
	long int ld;
	long long int lld;
	float f;

	printf("size of a char: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("size of an int: %lu bytes(s)\n", (unsigned long)sizeof(d));
	printf("size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(ld));
	printf("size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(lld));
	printf("size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
	return (0);

}
