#include "search_algos.h"

/**
  *linear_search - search for a value in an array of ints with linerar search
  *@array: array passed in
  *@size: number of elements in array
  *@value: value to be searched
  *Return: index of the value located, or -1 if not found
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
	{
		return (-1);
	}
	while (i < size)
	{
		printf("Value checked array [%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i = i + 1;
	}
	return (-1);
}
