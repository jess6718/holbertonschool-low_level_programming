#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: a string
 * @s2: a string
 * Return: The difference of s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int len_s1;
	int len_s2;

	len_s1 = 0;
	len_s2 = 0;
	while (s1[len_s1] != '\0' && s2[len_s2] != '\0')
	{
		/* calculate difference of the first non - matching character */
		if (s1[len_s1] != s2[len_s2])
		{
			return (s1[len_s1] - s2[len_s2]);
		}
		len_s1 = len_s1 + 1;
		len_s2 = len_s2 + 1;
	}
	return (s1[len_s1] - s2[len_s2]);
}
