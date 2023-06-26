#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		s = s + 1;
		len = len + 1;
	}
	while (len > 0)
	{
		s = s - 1;
		_putchar(*s);
		len = len - 1;
	}
	_putchar('\n');
}

