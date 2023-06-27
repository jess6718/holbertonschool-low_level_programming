#include "main.h"
/**
 * _strcpy - a copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: A pointer to destination of string
 * @src: A pointer to source string copied from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	char *tmp;

	i = 0;
	tmp = dest;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i = i + 1;
	}
	return (tmp);
}
