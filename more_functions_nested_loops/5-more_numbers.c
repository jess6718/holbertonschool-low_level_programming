#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * Return: Always 0
 */

void more_numbers(void)
{
	int n;
	int t;

	t = 0;
	while (t < 10)
	{
		n = 0;
		while (n <= 14)
		{
			if (n > 9)
				_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		n = n + 1;
		}
		_putchar('\n');
	t = t + 1;
	}
}
