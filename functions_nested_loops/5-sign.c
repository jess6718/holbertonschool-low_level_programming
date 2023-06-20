#include "main.h"

/**
 * print_sign - prints number sign
 * Description: print_signunction -  prints number sign
 * @n: An input int
 * Return: 1 if positive, o if 0, or -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
