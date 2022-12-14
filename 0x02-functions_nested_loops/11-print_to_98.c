#include "main.h"

/**
 * print_to_98 - Entry point
 * @n: number to print from
 * Return : 0
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
	{
		_putchar((n / 10) + '0');
		_putchar(n % 10 + '0');
	}
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n--;
	}
	else
	{
		_putchar('9');
		_putchar('8');
	}
	_putchar('\n');
}
