#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: An input string
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		int sum;

		sum = _strlen_recursion(s + 1);
		return (1 + sum);
	}
	else
	{
		return (0);
	}
}
