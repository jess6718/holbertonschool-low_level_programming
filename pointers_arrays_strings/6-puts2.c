#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * @str: An input string
 * Return: Nothing
 */
void puts2(char *str)
{
	int len;
	int i;

	len = 0;
	i = 0;

	while (str[len] != '\0')
	{

		len = len + 1;
	}

	len = len - 1;

	while (i <= len)
	{
		_putchar(str[i]);
		i = i + 2;
	}

	_putchar('\n');
}
