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
	int len_s;
	int len_d;
	int i;

	len_s = 0;
	while (src[len_s] != '\0')
	{
		len_s = len_s + 1;
	}

	len_d = 0;
	while (dest[len_d] != '\0')
	{
		len_d = len_d + 1;
	}

	if (n > len_s)
		n = len_s;

	i = 0;
	while (i < n)
	{
		dest[len_d] = src[i];
		len_d = len_d + 1;
		i = i + 1;
	}

	dest[len_d] = '\0';
	return (dest);
}
