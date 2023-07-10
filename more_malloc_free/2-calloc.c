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
	unsigned int idx;
	unsigned int max;
	char *spa;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	max = nmemb * size;

	spa = malloc(max);
	if (spa == NULL)
	{
		return (NULL);
	}

	idx = 0;
	while (idx < max)
	{
		*(spa + idx) = 0;
		idx = idx + 1;
	}
	return (spa);

}
