#include <stdio.h>
#include <stdlib.h>
int non_digit(char *c);
/**
 * main - add positive numbers passed in
 * @argc: count
 * @argv: value
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	i = 1;
	sum = 0;
	while (i < argc)
	{
		if (non_digit(argv[i]) == 1)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
		i = i + 1;
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * non_digit - checks if *c is an int
 * @c: check string
 * Return: 0 or 1
 */
int non_digit(char *c)
{
	int index;

	index = 0;
	while (c[index] != '\0')
	{
		if (c[index] > '9' || c[index] < '0')
		{
			return (1);
		}
		index = index + 1;
	}
	return (0);
}

