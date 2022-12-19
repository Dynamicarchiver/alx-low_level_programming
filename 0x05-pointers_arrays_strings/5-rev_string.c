#include "main.h"

/**
 * rev_string - Entry point
 * @s: string to print
 * Return: 0
 */
void rev_string(char *s)
{
	int i;
	int j = 0;
	int k;

	for (i = 0; s[i] != '\0'; i++)
	{
		j++;
	}
	for (k = j - 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
