#include "main.h"

/**
 * _puts - Prints a string, followed
 * @str: string
 * Return: Nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 1;
	}
	_putchar('\n');
}
