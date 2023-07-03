#include "main.h"

/**
 * factorial - returns the factorial of a number.
 * @n: An input integer
 * Return: The factorial of n
 */
int factorial(int n)
{
	int result;

	if (n > 1)
	{
		result = n * factorial(n - 1);
		return (result);
	}
	else if (n == 1 || n == 0)
	{
		return (1);
	}
	else	
	{
		return (-1);
	}
}
