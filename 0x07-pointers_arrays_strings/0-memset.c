#include "main.h"

/**
 * _memeset - a function that replace b from s in a count of n in a n array
 * @s: where to start replace from
 * @b: value to be replaced with
 * @n: count or iteration at which the value of b os replaced
 * Return: a pointer to the memeory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	/*type castiing *s from void to a char*/
	char *st = (char *) s;

	/*filling n element with b*/
	for (i = 0; i < n; i++)
		st[i] = b;
}
