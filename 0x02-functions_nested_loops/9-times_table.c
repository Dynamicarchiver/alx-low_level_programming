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
			if ((c / 10) > 0)
			{
				_putchar((c / 10) + '0');
			}
			 else
			 {
				_putchar(' ');
			 }
			 _putchar(c % 10 + '0');
			b++;
			if (b < 10)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		a++;
		_putchar('\n');
	}
}
