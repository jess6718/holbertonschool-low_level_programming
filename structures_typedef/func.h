#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a
 * parameter.
 * @str: An input pointer of the string to copy.
 * Return: A pointer to new string or NULL if it str is NULL
 */
char *_strdup(char *str)
{
	char *new_str;
	int len;
	int index;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len = len + 1;
	}
	new_str = malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}

	index = 0;
	while (str[index] != '\0')
	{
		new_str[index] = str[index];
		index = index + 1;
	}
	new_str[index] = '\0';
	return (new_str);
}
