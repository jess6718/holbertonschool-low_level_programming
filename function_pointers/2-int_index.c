#include <stdlib.h>

/**
 * int_index - a function that searches for an integer
 * @array: A pointer to array
 * @size: Size of the array
 * @cmp: function to compare the elements
 * Return: The index of the first element for witch the cmp function
 * does not return 0; -1 if no elements matches or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i = i + 1;
	}
	return (-1);
}
