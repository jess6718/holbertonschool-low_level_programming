#include "main.h"

/**
 * print_alphabet_x10 - print a-z 10 times
 */
void print_alphabet_x10(void)
{
	int n;
	char low;

	n = 1;
	while (n <= 10)
	{
		low = 'a';
		while (low <= 'z')
		{
			_putchar(low);
			low = low + 1;
		}
		_putchar('\n');
		n = n + 1;
	}
}
