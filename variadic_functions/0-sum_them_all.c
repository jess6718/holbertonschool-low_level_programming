#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A function that sums all its parameters
 * @n: number of parameters
 * @...: Other parameters
 * Return: 0 if nothing passed in
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ap;

	i = 0;
	sum = 0;
	va_start(ap, n);
	while (i < n)
	{
		sum = sum + va_arg(ap, int);
		i = i + 1;
	}
	va_end(ap);

	if (n == 0)
	{
		return (0);
	}

	return (sum);
}
