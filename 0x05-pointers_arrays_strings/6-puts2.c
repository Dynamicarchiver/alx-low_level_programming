#include "main.h"

/**
 * puts2 - Entry point
 * @str: pointer
 * Return: 0
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i = i + 2)
	{
		_putchar(str[i]);
		if (str[i] == '\0')
		{
			continue;
		}
	}
	_putchar('\n');
}
