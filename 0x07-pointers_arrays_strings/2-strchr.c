#include "main.h"

/**
 * _strchr - Entry point
 * @s: string
 * @c: character
 * Return: s if s = c else return NULL
 */

char *_strchr(char *s, char c)
{
	do 
	{
		if (*s == c)
			return (s);
	}
	while (*s++);
	return NULL;
}
