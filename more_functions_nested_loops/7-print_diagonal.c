#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: An input int
 * Return: 0
 */

void print_diagonal(int n)
{
	int i;
	int s;

	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			s = 0;
			while (s < i)
			{
				_putchar(' ');
				s = s + 1;
			}
			i = i + 1;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
