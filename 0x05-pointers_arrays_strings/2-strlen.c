#include "main.h"
#include <stdio.h>
/**
 * _strlen - Entry point
 * @s: pointer
 * Return: length of string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen(++s));
}
