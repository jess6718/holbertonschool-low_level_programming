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
	unsigned int tmp_number;

	i = 0;
	sign = 1;
	tmp_number = 0;
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
		i = i + 1;
	}
	if (s[i] != '\0')
	{
		while (s[i] >= '0' && s[i] <= '9')
		{
			tmp_number = tmp_number * 10 + (s[i] - '0');
			i = i + 1;
		}
	}
	return (tmp_number * sign);
}
