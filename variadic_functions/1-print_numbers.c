#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - A function that print numbers followed by a new line
 * @separator: An input string to be printed between numbers
 * @n: number of parameters
 * @...: Other parameters
 * Return: The of all parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	unsigned int arg_j;
	va_list ap;

	arg_j = 0;
	va_start(ap, n);
	while (arg_j < n)
	{
		printf("%d", va_arg(ap, int));

		if (arg_j == n - 1)
		{
			break;
		}

		i = 0;
		while (separator[i] != '\0')
		{
			if (separator != NULL)
			{
				printf("%c", separator[i]);
			}
			i = i + 1;
		}
		arg_j = arg_j + 1;
	}
	va_end(ap);
	printf("\n");
}
