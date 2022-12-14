#include "main.c"

/**
 * print_sign - Entry point
 * @n: number to be read
 * Return: 1 when grater than 0, 0 when 0, -1 when less than 0
 */

int print_sign(int n)
{
	if (n <= 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n = 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-1');
		return (-1);
	}
}
