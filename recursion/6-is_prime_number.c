#include "main.h"
int is_divisible(int num, int div);

/**
 * is_prime_number - checks if a number is prime.
 * @n: an input integer
 * Return: 1 if n is prime or  0 in otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (is_divisible(n, 2));
}

/**
 * is_divisible - check if num is divisible
 * @num: the number to be checked
 * @div: division
 * Return: 1 if num is divisible or 0 if numis not divisible
 */
int is_divisible(int num, int div)
{
	if (num == div)
	{
		return (1);
	}
	if (num % div == 0)
	{
		return (0);
	}
	else
	{
		return (is_divisible(num, div + 1));
	}
}
