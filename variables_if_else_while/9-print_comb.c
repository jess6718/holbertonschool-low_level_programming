#include <stdio.h>

/**
 * main - print combination of single-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;
	int comma = 44;
	int space = 32;

	while (n < 10)
	{
		putchar(48 + n);
		if (n < 9)
		{
			putchar(comma);
			putchar(space);
		}
		n = n + 1;
	}
	putchar('\n');
	return (0);
}
