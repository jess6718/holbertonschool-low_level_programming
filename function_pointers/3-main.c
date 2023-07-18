#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point of program that performs operation
 * @argc: takes number of arguments
 * @argv: takes value of argument which is array of characters
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int int_1;
	int int_2;
	char *str_op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	int_1 = atoi(argv[1]);
	int_2 = atoi(argv[3]);
	str_op = argv[2];

	if (get_op_func(str_op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(str_op)(int_1, int_2));
	return (0);
}
