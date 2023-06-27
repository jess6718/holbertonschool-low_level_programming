#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: a string
 * @src: a string
 * @n: an integer
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int srclen;
	int i;
	char *temp;
	char *start;

	srclen = 0;
	i = 0;
	temp = dest;
	start = src;

	while (src[srclen] != '\0')
	{
		srclen = srclen + 1;
	}

	while (*dest != '\0')
	{
		dest = dest + 1;
	}

	if (n > srclen)
		n = srclen;

	src = start;

	while (i < n)
	{
		*dest++ = *src++;
		i++;
	}

	*dest = '\0';
	return (temp);
}
