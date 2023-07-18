#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - a function that returns the sum of a and b
 * @a: an input integer
 * @b: an input integer
 * Return: The result to sum a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that returns the difference of a and b
 * @a: an input integer
 * @b: an input integer
 * Return: The result to difference  a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that returns the protuct of a and b
 * @a: an input integer
 * @b: an input integer
 * Return: The result to product of a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that returns the division of a by b
 * @a: an input integer
 * @b: an input integer
 * Return: The result to division of a / b
 */
int op_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - a function that returns the remainder of division of a % b
 * @a: an input integer
 * @b: an input integer
 * Return: The result to remainder of division of a % b
 */
int op_mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	printf("Error\n");
	exit(100);
}
