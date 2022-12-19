#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char p;

	p = 'a';
	while
		(p <= 'z') {
			if ((p != 'q' && p != 'e') && p <= 'z')
				putchar(p);
			p++;
		}
	putchar('\n');
	return (0);
}
