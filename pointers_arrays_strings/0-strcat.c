#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: a string
 * @src: a string
 * Return: A pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *tmp;
	int len_d;
	int len_s;

	len_d = 0;
	len_s = 0;
	tmp = dest;
	while (dest[len_d] != '\0')
	{
		len_d = len_d + 1;
	}
	/* append src to dest */
	while (src[len_s] != '\0')
	{
		dest[len_d] = src[len_s];
		len_s = len_s + 1;
		len_d = len_d + 1;
	}
	dest[len_d] = '\0';
	return (tmp);
}
