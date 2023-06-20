#include "main.h"

/**
  * print_alphabet - Print a-z
  *
  *Return: Void
  */

void print_alphabet(void)
{
	char low = 'a';

	while (low <= 'z')
		{_putchar(low);
		low = low + 1;
		}
		_putchar('\n');
}
