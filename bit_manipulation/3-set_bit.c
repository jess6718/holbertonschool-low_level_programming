#include "main.h"

/**
 * set_bit - changes bit at index location to 1
 * @n: number to change bit in
 * @index: location of bit to change
 * Return: success 1, fail -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (sizeof(n) * 8 < index)
	{
		return (-1);
	}
	i = 1;
	i = i << index; /* i is to assist setting value 1 */
	*n = *n | i; /* dereference to access value that n points to */
	return (1);
}
