#include "main.h"

/**
 * print_line - draws "___"
 * @n: input int
 * Return: 0
 */

void print_line(int n)
{
	int i;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i = i + 1;
		}
	}
	_putchar('\n');
}
