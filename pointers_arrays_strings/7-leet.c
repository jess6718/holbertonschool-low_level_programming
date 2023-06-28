#include "main.h"

/**
* leet - encodes a string to 1337
* @s: string to encode
* Return: an encode string
*/
char *leet(char *s)
{
	int i;
	int j;
	char num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char str[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (str[j] != '\0')
		{
			if (s[i] == str[j])
			{
				s[i] = num[j];
			}
			j = j + 1;
		}
		i = i + 1;
	}
	return (s);
}
