#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _print - print array / subarray
 * @array: array passed in
 * @l: start of array
 * @h: end of array
 */
void _print(int *array, size_t l, size_t h)
{
	size_t i;

	i = l;
	while (i <= h)
	{
		if (i < h)
		{
			printf("%d, ", array[i]);
		}
		if (i == h)
		{
			printf("%d\n", array[i]);
		}
		i = i + 1;
	}
}

/**
  *binary_search - search for a value in an sorted array
  * of ints with binary search
  *@array: array to be searched
  *@size: number of elements in the array
  *@value: value to be located
  *Return: index:number of the int that been located, or -1 if not found
  */
int binary_search(int *array, size_t size, int value)
{
	size_t l, h, m;


	if (array == NULL)
	{
		return (-1);
	}
	l = 0;
	h = size - 1;
	while (l <= h)
	{
		m = (l + h) / 2;
		printf("Searching in array: ");
		_print(array, l, h);
		if (array[m] == value)
		{
			return (m);
		}
		else if (array[m] > value)
		{
			h = m - 1;
		}
		else
		{
			l = m + 1;
		}
	}
	return (-1);
}
