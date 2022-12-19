#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - Entry point
 * @str: pointer
 * Return: 0
 */

void puts_half(char *str)
{
	int i;
	int length;
	int n;

	length = strlen(str);
	n = length / 2;
	if (length % 2 != 0)
	{
		n = (length - 1) / 2;
	}
	for (i = n; i <= length; i++)
	{
		_putchar(str[i]);
	}
}