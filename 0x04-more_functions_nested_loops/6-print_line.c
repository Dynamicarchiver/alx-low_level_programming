#include "main.h"

/**
 * print_line - Entry point
 * @n: number of line to draw
 * Return: 0
 */

void print_line(int n)
{
	int a;

	if(n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
