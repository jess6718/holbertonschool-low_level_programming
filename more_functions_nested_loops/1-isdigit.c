#include "main.h"

/**
 * _isdigit - checks for a digit (0 to 9)
 * @c: An input int
 * Return: 1 if c is a digit or 0 if not
 */

int _isdigit(int c)
{
	int renVal = 0;
	char digit = '0';

	while (digit <= '9')
	{
		if (c == digit)
		{
			renVal = 1;
			break;
		}
		digit = digit + 1;
	}
	return (renVal);
}
