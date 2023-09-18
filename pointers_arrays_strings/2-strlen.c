#include "main.h"

/**
 * _strlen -  Returns the length of a string.
 * @s: String
 * Return: Nothing
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len = len + 1;
	}
	return (len);
}
