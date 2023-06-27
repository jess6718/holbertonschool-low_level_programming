#include "main.h"

/**
 * _strncpy - copys the strings.
 * @dest: dest input string
 * @src: src input string
 * @n: n input integer
 * Return: A pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
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

	srclen++;

	if (n > srclen)
		n = srclen;

	src = start;

	while (i < n)
	{
		*dest++ = *src++;
		i++;
	}
	return (temp);
}
