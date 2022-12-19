#include "main.h"
/**
 * print_rev - Entry point
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int i;
	int j = 0;
	int k;

	for (i = 0; str[i] != '\0'; i++)
	{
		j++;
	}
	for (k = j - 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
