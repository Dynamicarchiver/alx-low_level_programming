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
		printf("%d", n)
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
			printf("%d", n);
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
		printf("98");
	}
	_putchar('\n');
}
