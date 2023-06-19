#include <stdio.h>

/**
 * main - Print a-z
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n = 'z';

	while (n >= 'a')
		{putchar(n);
		n--;
		}
		putchar('\n');
	return (0);
}

