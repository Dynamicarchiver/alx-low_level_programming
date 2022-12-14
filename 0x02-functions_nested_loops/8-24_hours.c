#include "main.h"

/**
 * jack_baurer - Entry point
 *
 * Return: 0
 */

void jack_baurer(void)
{
	int h;
	int m;
	
	h = 0;
	while (h < 24)
	{
		m = 0;
		while ( a < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
		h++;
	}
}
