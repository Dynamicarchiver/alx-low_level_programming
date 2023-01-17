#include "main.h"

/**
 * rot13 - a functio to encode string using rot13
 * @n: string to be encoded
 * Return: the encoded string
 */

char *rot13(char *n)
{
	int i, x;
	int find[] = {'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E', 'f', 'F',
		'g', 'G', 'h', 'H', 'i', 'I', 'j', 'J', 'k', 'K', 'l', 'L', 'm',
		'M', 'n', 'N', 'o', 'O', 'p', 'P', 'q', 'Q', 'r', 'R', 's', 'S',
		't', 'T', 'u', 'U', 'v', 'V', 'w', 'W', 'x', 'X', 'y', 'Y', 'z',
		'Z'};
	int replace[] = {'n', 'N', 'o', 'O', 'p', 'P', 'q', 'Q', 'r', 'R', 's',
		'S', 't', 'T', 'u', 'U', 'v', 'V', 'w', 'W', 'x', 'X', 'y', 'Y',
		'z', 'Z', 'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E', 'f',
		'F', 'g', 'G', 'h', 'H', 'i', 'I', 'j', 'J', 'k', 'K', 'l', 'L',
		'm', 'M'};

	for (i = 0; *(n + i) != '\0'; i++)
	{
		for (x = 0; x < 52; x++)
		{
			if (*(n + i) == find[x])
			{
				*(n + i) = replace[x];
				x = 52;
			}
		}
	}
	return (n);
}
