#include "main.h"
#include <stdlib.h>
char *return_val(char *new_str, char *s1, char *s2, int len_s1, int len_s2);

/**
 * str_concat - function concatenates two strings
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * Return: Apointer to concatened strings or NULL if it str is NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int len_s1;
	int len_s2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len_s1 = 0;
	while (s1[len_s1] != '\0')
	{
		len_s1 = len_s1 + 1;
	}

	len_s2 = 0;
	while (s2[len_s2] != '\0')
	{
		len_s2 = len_s2 + 1;
	}

	new_str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}
	return (return_val(new_str, s1, s2, len_s1, len_s2));
}

/**
 * return_val - function return concat str
 * @new_str input str
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * @len_s1: length
 * @len_s2: length
 * Return: Apointer to concatened strings
 */
char *return_val(char *new_str, char *s1, char *s2, int len_s1, int len_s2)
{
	int index;

	index = 0;
	while (index < (len_s1 + len_s2))
	{
		if (index < len_s1)
		{
			new_str[index] = s1[index];
		}
		else
		{
			new_str[index] = s2[index - len_s1];
		}
		index = index + 1;
	}
	new_str[index] = '\0';
	return (new_str);
}
