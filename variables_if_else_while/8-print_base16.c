#include <stdio.h>

/**
 * main - Print all numbers of base 16
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;
	char c = 'a';

	while (n < 10)
	{
		putchar(48 + n);
		n = n + 1;
	}
	while (c <= 'f')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
