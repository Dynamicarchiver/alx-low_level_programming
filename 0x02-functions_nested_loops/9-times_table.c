#include "main.h"

/**
 * times_table - Entry point
 *
 * Return: 0
 */
void times_table(void)
{
	int a;
	int b;
	int c = (a * b);

	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			if (b > 0 && b < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			_putchar(c + '0');
			b++;
		}
		a++;
		_putchar('\n');
	}
}
