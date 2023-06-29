#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: an input string
 * @accept: an input character to match that in s
 * Return: returns length of prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count = count + 1;
				break;
			}
			j = j + 1;
		}
		if (accept[j] == '\0')
		{
			break;
		}
		i = i + 1;
	}

	return (count);
}
