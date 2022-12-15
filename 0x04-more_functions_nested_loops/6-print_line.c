#include "main.h"

/**
 * print_line - Entry point
 * @n: number of line to draw
 * Return: 0
 */

void print_line(int n)
{
	if (n >= 1)
	{
		while (n >= 1)
		{
			_putchar('-');
			n++;
		}
		_putchar('\n');
	}
		else
		{
			_putchar('\n');
		}
}
