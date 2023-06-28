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
	int i;

	i = 0;
	while (i < n--)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i = i + 1;
		n = n - 1;
	}
}
