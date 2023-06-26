#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: int pointer
 * @b: int pointer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp; 
}
