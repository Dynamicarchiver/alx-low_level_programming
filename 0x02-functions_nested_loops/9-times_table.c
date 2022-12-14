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
		c = (a * b);
		while (b < 10)
		{
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
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
		}
		a++;
		_putchar('\n');
	}
}
