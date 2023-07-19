#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - A function that print strings followed by a new line
 * @separator: An input string to be printed between numbers
 * @n: number of parameters
 * @...: Other parameters
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int arg_j;
	va_list ap;

	arg_j = 0;
	va_start(ap, n);
	while (arg_j < n)
	{
		/* a pointer (char *) passed in to fetch arg value */
		printf("%s", va_arg(ap, char *));

		if (arg_j == n - 1)
		{
			break;
		}

		if (separator != NULL)
		{
			printf("%s", separator);
		}
		else
		{
			printf("(nil)");
		}

		arg_j = arg_j + 1;
	}
	va_end(ap);
	printf("\n");
}

