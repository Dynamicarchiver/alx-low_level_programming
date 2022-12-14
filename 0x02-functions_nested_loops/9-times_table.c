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
	int c;

	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			c = (a * b);
			if (b > 0 && b < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (c / 10 > 0)
			{
			_putchar((c / 10) + '0');
			}
			else
			{
				_putchar(c + '0');
			}
			b++;
		}
		a++;
		_putchar('\n');
	}
}
