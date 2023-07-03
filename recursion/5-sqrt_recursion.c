#include "main.h"
int _sqrt(int root, int prev);

/**
 * _sqrt_recursion - returns the value of square root of
 * @n: an input integer
 * Return: The square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(1, n));
}


/**
 * _sqrt - find square root
 * @prev: previous value
 * @root: square root value
 * Return: the square root
 */
int _sqrt(int root, int prev)
{
	if (root * root == prev)
	{
		return (root);
	}
	if (root * root > prev)
	{
		return (-1);
	}
	return (_sqrt(root + 1, prev));
}
