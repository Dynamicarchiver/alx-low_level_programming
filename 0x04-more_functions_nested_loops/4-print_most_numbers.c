#include "main.h"

/**
 * print_most_numbers - a function that prints the number
 *
 * Return: 0-9, excluding 2 and 4, followed by a new line
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (a == 2 || a == 4)
		{
			a++;
		}
		_putchar(a + '0');
	}
	_putchar('\n');
}
