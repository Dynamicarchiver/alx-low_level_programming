#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function to concanates two string
 * @s1: the first string to concanates
 * @s2: the second string to concanates
 * Return: the concated string or null
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, ci = 0, length = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; *(s1 + i) || *(s2 + i); i++)
		length++;

	s = malloc(sizeof(*s) * (length + 1));

	for (i = 0; *(s1 + i); i++)
		*(s + ci++) = *(s1 + i);
	for (i = 0; *(s2 + i); i++)
		*(s + ci++) = *(s2 + i);
	return (s);

}
