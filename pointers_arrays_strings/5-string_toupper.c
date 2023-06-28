#include "main.h"

/**
 * string_toupper - changes lowercase letters of a  string to uppercase
 * @s: a string
 * Return: char pointer to converted string
 */
char *string_toupper(char *s)
{
	char *start;
	int index;

	index = 0;
	start = s;
	while (s[index] != '\0')
	{
		if (s[index] > 'a' && s[index] < 'z')
			s[index]  = s[index] - 32;
		index = index + 1;
	}
	return (start);
}
