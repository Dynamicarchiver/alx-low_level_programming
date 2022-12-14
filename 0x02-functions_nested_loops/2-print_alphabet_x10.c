#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return : 0
 */
void print_alphabet_x10(void)
{
	int a;
	int count;

	a = 'a';
	count = 1;
	while (a <= 'z')
	{
		_putchar(a);
		a++;
		while ( count <= 10)
		{
			count++;
		}
		_putchar('\n');
	}

}
