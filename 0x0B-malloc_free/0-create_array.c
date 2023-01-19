#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars and initializes it
 * @size: size of char
 * @c: The character
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
