#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int a;

	a = 'a';
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
