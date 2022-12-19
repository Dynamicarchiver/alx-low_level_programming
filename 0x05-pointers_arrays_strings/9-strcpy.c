#include "main.h"

/**
 * *_strcpy - Entry point
 * @dest: copied
 * @src:copier
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for(i = 0; i != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
 }
