#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to search in
 * @c: an input character to locate into string s
 * Return: returns pointer to c position otherwise returns NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s);
		}
		i = i + 1;
	}
	return ('\0');
}

