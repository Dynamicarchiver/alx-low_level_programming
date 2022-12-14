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
		_putchar(n + '0');
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
			_putchar(n + '0');
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
		_putchar("98");
	}
	_putchar('\n');
}
