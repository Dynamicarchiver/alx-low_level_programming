#include "main.h"

/**
 * _memcpy - A function that copies the memory area src to memory area dest
 * @dest: destination to copy to
 * @src: destinatiom to copy from
 * @n: number of bytes to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
