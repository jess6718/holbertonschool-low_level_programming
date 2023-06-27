#include "main.h"
#include <stdio.h>

/**
 * rev_string - prints n elements of an array of integers
 * @a:a pointer
 * @n:a int
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i < n - 1)
		printf("%d, ", a[i]);
		else
		printf("%d", a[i]);
		i = i + 1;
	}
	printf("\n");
}
