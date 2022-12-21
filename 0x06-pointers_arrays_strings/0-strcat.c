#include "main.h"
#include <stdio.h>

/**
 * _strcat - Entry point
 * @dest: first pointer
 * @src: second ponter
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	if (dest == NULL && src == NULL)
		return (NULL);
	for (; *dest != '\0'; dest++)
	{
		_putchar(*dest);
	}
	for (; *src != '\0'; src++)
	{
		*dest++ = _putchar(*src);
	}

	*dest = '\0';
	return (0);
}
