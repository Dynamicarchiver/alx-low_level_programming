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
	/*Create a copy of dest*/
	char *d = dest;

	/*Find the end of the destination string*/
	while (*d != '\0')
	{
		d++;
	}
	/**
	 * Appending the source string character
	 * until not get null charcter of src or n != 0
	 */
	while (n--)
	{
		if (!(*d++ == *src++))
		{
			return (dest);
		}
	}
	/*appending null charcter in the last*/
	*dest = '\0';

	return (dest);
}
