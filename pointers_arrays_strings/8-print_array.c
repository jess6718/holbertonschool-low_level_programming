#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a:a pointer
 * @n:a int
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;
	int index;	

	i = 0;
	index = n - 1;
	while (i <= index)
	{
		if (i < index)
		printf("%d, ", a[i]);
		else
		printf("%d", a[i]);
		i = i + 1;
	}
	printf("\n");
}
