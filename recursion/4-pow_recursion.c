#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power y.
 * @x: the base
 * @y: the exponent
 * Return: The result of x raised y
 */
int _pow_recursion(int x, int y)
{
	int result;

	if (y == 0)
	{
		return (1);
	}

	else if (y == 1)
	{
		return (x);
	}

	else if (y < 0)
	{
		return (-1);
	}

	else
	{
		result = x * _pow_recursion(x, y - 1);
		return (result);
	}
}
