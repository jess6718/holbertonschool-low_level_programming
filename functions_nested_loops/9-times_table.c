#include "main.h"

/**
 * times_table - times
 * Description: print times table
 * Return: 0
 */
void times_table(void)
{
	int a1;
	int a2;

	a1 = 0;
	while (a1 < 10)
	{
		a2 = 0;
		while (a2 < 10)
		{
			if (a1 * a2 >= 10)
			{
				if (a1 != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar((a1 * a2) / 10 + '0');
				_putchar((a1 * a2) % 10 + '0');
			}
			else
			{
				if (a2 != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(a1 * a2 + '0');
			}
			a2 = a2 + 1;
		}
		_putchar('\n');
		a1 = a1 + 1;
	}
}
