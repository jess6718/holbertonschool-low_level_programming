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
	int sub;

	if (min > max)
	{
		return (NULL);
	}
	
	sub = max - min;
	array = malloc(sizeof(int) * (sub + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	index = 0;
	while (index <= sub) /* putting (min <= max) in condition instead saves creating variable sub */ 
	{
		array[index] = min;
		index = index + 1;
		min = min + 1;
	}
	return (array);
}
