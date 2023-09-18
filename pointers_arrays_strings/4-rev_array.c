#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: input array
 * @n: number of elements of array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int start;
	int end = n - 1;

	start = 0;
	while (start < end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
		start = start + 1;
		end = end - 1;
	}
}
