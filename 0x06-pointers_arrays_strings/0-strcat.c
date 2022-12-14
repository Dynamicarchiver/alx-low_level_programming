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
	char *d = dest;

	while (*d != '\0')
	{
		d++;
	}
	while (*src != '\0')
	{
		*d++ = *src++;
	}

	*d = '\0';
	return (dest);
}
