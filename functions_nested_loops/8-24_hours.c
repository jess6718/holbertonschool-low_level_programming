#include "main.h"

/**
 * jack_bauer - print minute of a day
 *
 * Description: print minute
 * Return: nothing
 */
void jack_bauer(void)
{
	int h;
	int m;

	h = 0;
	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			m = m + 1;
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
		}
		h = h + 1;
	}
}
