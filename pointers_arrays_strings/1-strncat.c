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
	char *temp;
	char *start;

	len_s = 0;
	len_d = 0;
	i = 0;
	temp = dest;
	start = src;

	while (src[len_s] != '\0')
	{
		len_s = len_s + 1;
	}

	while (dest[len_d] != '\0')
	{
		len_d = len_d + 1;
	}

	if (n > len_s)
		n = len_s;
	/* reset src value to bring printer to start */
	src = start;
	while (i < n)
	{
		dest[len_d] = src[i];
		len_d = len_d + 1;
		i = i + 1;
	}

	dest[len_d] = '\0';
	return (temp);
}
