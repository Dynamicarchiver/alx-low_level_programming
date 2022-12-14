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

	count = 1;
	while (count <= 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		count++;
	}

}
