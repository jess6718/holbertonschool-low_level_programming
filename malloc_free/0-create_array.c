#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the array
 * @c: A character to initialized the array
 * Return: Apointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int index;

	s = malloc(size*sizeof(char));
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	index = 0;
	while (index < size)
	{
		s[index] = c;
		index = index + 1;
	}
	return (s);
}
