#include "main.h"

/**
 * _strspn - Entry point
 * @s: string to scan
 * @accept: ctring to find character to compare
 * Return: the point where a match was found i.e the number
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' && s[i] != accept[j]; j++);
		if (accept[j] == '\0')
	       return (i);	       
	}
	return (i);
}
