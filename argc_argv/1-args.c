#include "main.h"
#include <stdio.h>

/**
 * main - a program thatprints the number of arguements passed into it
 * @argc: An argument counter
 * @argv: An argument values
 * Return: Always 0
 */
int main(int argc, char *argv[])
{

	if (argv[0])
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
