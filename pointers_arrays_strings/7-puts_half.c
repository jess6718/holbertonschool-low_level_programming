#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: a string
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len;
	int half;

	len = 0;
	while (str[len] != '\0')
	{
		len = len + 1;
	}
	half = (len + 1) / 2;
	while (half < len)
	{
		_putchar(str[half]);
		half = half + 1;
	}
	_putchar('\n');
}
