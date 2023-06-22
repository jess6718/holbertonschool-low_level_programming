#include "main.h"

/**
 * _isupper - Checks uppercase character
 * @c: input int
 * Return: 1 if uppercase or 0 if not
 */
int _isupper(int c)
{
	int renVal = 0;
	char upper = 'A';

	while (upper <= 'Z')
	{
		if (c == upper)
		{
			renVal = 1;
			break;
		}
		upper = upper + 1;
	}
	return (renVal);
}

