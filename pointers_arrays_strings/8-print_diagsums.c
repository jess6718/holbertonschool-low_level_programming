#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonal of a square int matrix
 * @a: a square int matrix
 * @size: an integer with the size of matrix
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1;
	int sum2;

	i = 0;
	sum1 = 0;
	sum2 = 0;
	while (i < size)
	{
		sum1 = sum1 + a[i * size + i];
		sum2 = sum2 + a[i * size + (size - 1 - i)];
		i = i + 1;
	}

	printf("%d, %d\n", sum1, sum2);
}
