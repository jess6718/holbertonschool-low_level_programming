#include "main.h"

/**
 * _strstr - finds the first occurrence.
 * @haystack: an input string
 * @needle: an input sustring to match that in haystack
 * Return: returns a pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	char *result = haystack;

	i = 0;
	if (needle[i] == '\0')
	{
		return (result);
	}
	while (result[i] != '\0')
	{
		while (result[i] == needle[i])
		{
			if (needle[i + 1] == '\0')
			{
				return (result);
			}
			i = i + 1;
		}
		result++;
	}
	return ('\0');
}
