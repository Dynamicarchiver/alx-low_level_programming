#include "main.h"

/**
 * print_last_digit - Entry point
 * @a: the number to be read
 * Return: the value of the last digit
 */

int print_last_digit(int a)
{
	int n = a % 10;

	if (n < 0)
	{
		n = (-1 * n);
	}
	_putchar(n + '0');
	return (n);
}
