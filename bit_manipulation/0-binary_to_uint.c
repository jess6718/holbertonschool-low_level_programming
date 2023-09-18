#include "main.h"
/**
 * binary_to_uint - convert binary to unsigned int
 * @b: pointer to char
 * Return: converted value or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int convert;

	i = 0;
	convert = 0;
	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		convert = convert * 2 + (b[i] - '0');
		i = i + 1;
	}
	return (convert);
}
