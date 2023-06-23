#include "main.h"

/**
 * print_triangle -  prints a triangle
 * @size: An input int
 * Return: nothing
 */
void print_triangle(int size)
{
	int t;
	int s;
	int limit;

	limit = size - 1;
	if (size > 0)
	{
		t = 0;
		while (t < size)
		{
			s = 0;
			while (s < size)
			{
				if (s < limit)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			s = s + 1;
			}
			limit = limit - 1;
			_putchar('\n');
		t = t + 1;
		}
	}
	else
		_putchar('\n');
}
