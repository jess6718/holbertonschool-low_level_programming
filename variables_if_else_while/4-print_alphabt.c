#include <stdio.h>

/**
 * main - Print a-z except 'q' and 'e'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low = 'a';

	while (low <= 'z')
	{
		if (low != 'e' && low != 'q')
		putchar(low);
		low++;
	}
	putchar('\n');
	return (0);
}
