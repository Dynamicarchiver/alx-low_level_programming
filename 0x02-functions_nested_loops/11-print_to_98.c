#include "main.h"

/**
 * print_to_98 - Entry point
 * @n: number to print from
 * Return : 0
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		_putchar(n);
		if (n < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
