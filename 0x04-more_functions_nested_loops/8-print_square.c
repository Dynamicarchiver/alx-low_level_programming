#include "main.h"

/**
 * print_square - Entry point
 * @size: number of square to print
 * Return: o
 */

void print_square(int size)
{
	int a,b;

	if (n > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size;b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
