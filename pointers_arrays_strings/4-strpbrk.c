#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: an input string
 * @accept: an input character to match that in s
 * Return: returns a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j = j + 1;
		}
		i = i + 1;
	}

	return ('\0');
}
