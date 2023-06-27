#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: A string
 * Return: integer from conversion
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int result;
	char no_number;

	i = 0;
	sign = 1;
	result = 0;
	no_number = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
		sign = sign * -1;
		/* convert string to number */
		if (s[i] >= '0' && s[i] <= '9')
		{
			no_number = 1;
			result = result * 10 + s[i] - '0';
		}
		else if (no_number == 1)
		break;

		i = i + 1;
	}

	if (sign < 0)
	result = (-result);

	return (result);
}
