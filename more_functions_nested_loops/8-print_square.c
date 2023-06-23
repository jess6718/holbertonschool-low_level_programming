#include "main.h"

/**
 * print_square - prints a square
 * @size: input int
 * Return: 0
 */
void print_square(int size)
{
	int h;
	int v;

	if (size > 0)
	{
		v = 0;
		while (v < size)
		{
			h = 0;
			while (h < size)
			{
				_putchar('#');
				h = h + 1;
			}
			v = v + 1;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
