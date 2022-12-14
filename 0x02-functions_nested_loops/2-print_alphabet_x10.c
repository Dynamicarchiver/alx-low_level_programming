#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return : 0
 */
void print_alphabet_x10(void)
{
	int a;

	a = 'a';
	while (a <= 'z')
	{
		_putchar(a);
		a++;
		while ( a <= 10)
		{
			a++;
		}
		_putchar('\n);
	}

}
