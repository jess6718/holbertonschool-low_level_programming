#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result;
	int num_1;
	int num_2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num_1 = atoi(argv[1]);
		num_2 = atoi(argv[2]);
		result = num_1 * num_2;
		printf("%d\n", result);
		return (0);
	}
}
