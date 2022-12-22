#include "main.h"

/**
 * _strncat - Entry point
 * @dest: first pointer
 * @src: second pointer
 * @n: amount
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	/*initialize the variable we will need to iterate*/
	int i, j;

	/*iteratinh through array dest and checking if it is not '\0' */
	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	/******* iterating through a specific number in src *******/
	for (j = 0; j < n; j++)
	{
	dest[i + j] = src[j];

	if (src[j] == '\0')
	{
		j = n;
	}
	}
	return (dest);
}
