#include <stdio.h>
#include "main.h"

/**
 * main - Entry piont
 * Return: 0
 */

int main(void)
{
	int n;

	n = 1;
	while (n <= 100)
	{
		if (n % 3 == 0)
			printf("Fizz ");
		else if (n % 5 == 0)
			printf("Buzz ");
		else if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d ", n);
		n = n + 1;
	}
	printf("\n");
	return (0);
}
