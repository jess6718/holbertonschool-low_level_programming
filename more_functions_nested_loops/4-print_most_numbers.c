#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 (not 2 & 4)
 * Return: 0
 */

void print_most_numbers(void)
{
	int num;

	num = 0;
	while (num <= 9)
	{
		if (num != 2 && num != 4)
			_putchar(num + '0');
		num = num + 1;
	}
	_putchar('\n');
}
