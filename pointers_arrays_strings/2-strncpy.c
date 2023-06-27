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
	char *ptr = dest;

	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*ptr = '\0';
		ptr++;
		n--;
	}
	return (dest);
}
