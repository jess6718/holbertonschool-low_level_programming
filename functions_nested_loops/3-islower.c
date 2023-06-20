#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: An input character
 * Description: function _islower - checks for lowercase character
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
