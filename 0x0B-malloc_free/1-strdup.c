#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function to return the duplicate of a string
 * @str: the string to be duplicated
 * Return: the duplicated string
 */

char *_strdup(char *str)
{
	char *s;
	int i, length = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; *(str + i); i++)
		length++;
	s = malloc(sizeof(char) * (length + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; *(str + i); i++)
		*(s + i) = *(str + i);
	*(s + length) = '\0';
	return (s);

}
