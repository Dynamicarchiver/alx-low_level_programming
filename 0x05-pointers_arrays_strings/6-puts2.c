#include "main.h"

/**
 * puts2 - Entry point
 * @str: pointer
 * Return: 0
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
