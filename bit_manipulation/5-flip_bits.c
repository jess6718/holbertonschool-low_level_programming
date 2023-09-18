#include "main.h"

/**
 * flip_bits - returns the number of bits to flip between numbers
 * @n : first number to compare
 * @m : second number to compare
 * Return: number of bits to flip between numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int count;

	count = 0;
	diff = n ^ m; /*check whether last bit requires flip*/
	while (diff >= 1)
	{
		/* if condition is satisfied, last bit of diff need flip*/
		if ((diff & 1) == 1)
		{
			count = count + 1;
		}
		diff = diff >> 1;
	}
	return (count);
}
