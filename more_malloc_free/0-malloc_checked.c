#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - A function that allocates memory using malloc.
 * @b: An unsigned input integer
 * Return: Apointer to allocated memory or NULL if it fails
 */
void *malloc_checked(unsigned int b)
{
	void *result;

	result = malloc(b);

	if (result == NULL)
	{
		exit(98);
	}

	return (result);
}
