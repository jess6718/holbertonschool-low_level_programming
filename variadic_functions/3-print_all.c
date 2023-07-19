#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - A function prints anyting passed in
 * @format: A list of type of arguments passed to the function
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *str;

	va_start(ap, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str != NULL)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
					|| format[i] == 's') && format[i + 1] != '\0')
		printf(", ");
		i = i + 1;
	}
	va_end(ap);
	printf("\n");
}
