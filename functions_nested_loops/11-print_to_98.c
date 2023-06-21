#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 - number to 98
 * @n: input int
 * Description: function that prints all natural numbers n to 98
 * Return: Nothing
 */
void print_to_98(int n)
{

	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n >= 99)
			{
				printf(", ");
			}
			n = n - 1;
		}
		printf("\n");
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n <= 97)
			{
				printf(", ");
			}
			n = n + 1;
		}
		printf("\n");
	}
}
