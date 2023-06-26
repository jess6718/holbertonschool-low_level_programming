#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse a string
 * @s: a string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len;
	int i;
	char tmp;

	len = 0;
	i = 0;

	while (s[len] != '\0')
	{

		len = len + 1;
	}

	while (i < len--)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
		i = i + 1;
	}
}
