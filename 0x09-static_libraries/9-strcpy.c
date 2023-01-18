#include "main.h"

/**
 * *_strcpy - Entry point
 * @dest: copied
 * @src:copier
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	char *d = dest;

	for (; *src != '\0'; src++)
	{
		*dest = *src;
		dest++;
	}
	*dest = *src;
	return (d);
}
