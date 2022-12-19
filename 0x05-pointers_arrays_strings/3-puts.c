#include "main.h"
#include <stdio.h>

/**
 * _puts - Entry point
 * @str: string pointer
 * Return: 0
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[1] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
