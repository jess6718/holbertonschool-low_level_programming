#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: an array input to print
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j = j + 1;
		}
	i = i + 1;
	_putchar('\n');
	}
}
