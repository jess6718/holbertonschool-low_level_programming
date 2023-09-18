#include "main.h"
#include <stdlib.h>

/**
 * _calloc - A function that allocates memory for an array using malloc
 * @nmemb: number of memory spaces
 * @size: size of nmemb
 * Return: returns pointer to allocated space, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int index;
	unsigned int total;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total = nmemb * size;

	ptr = malloc(total);
	if (ptr == NULL)
	{
		return (NULL);
	}

	index = 0;
	while (index < total)
	{
		*(ptr + index) = 0;
		index = index + 1;
	}
	return (ptr);
}
