#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - A function that creates an array of integers
 * @min: min number to start
 * @max: max number to start
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *array;
	int index;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	index = 0;
	while (index >= min && index <= max)
	{
		array[index] = min;
		index = index + 1;
		min = min + 1;
	}
	return (array);
}
