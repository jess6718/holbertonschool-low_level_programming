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
	int index;

	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index = index + 1;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index = index + 1;
	}
	return (dest);
}
