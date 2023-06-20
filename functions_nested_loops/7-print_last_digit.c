#include "main.h"

/**
 * print_last_digit - last digit
 * @n: input int
 * Description: return last digit of n
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	int last;

	if (n >= 0)
	{
		last = n  % 10;
	}
	else
	{
		last = -(n % 10);
	}
	_putchar(last + '0');
	return (last);
}
