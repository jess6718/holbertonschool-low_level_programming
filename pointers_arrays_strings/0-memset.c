#include "main.h"

/**
 * _memset - fills memory with constant bytes
 * @s: location to fill
 * @b: char to fill memory with
 * @n: size of memory block to fill
 * Return: returns pointer to memory filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n / b)
	{
		s[i] = b;
		i = i + 1;
	}
	return (s);
}
