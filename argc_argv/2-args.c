#include <stdio.h>
#include "main.h"

/**
* main - prints the number of arguments passed into the program
* @argc: int
* @argv: list
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i = i + 1;
	}
	return (0);
}
