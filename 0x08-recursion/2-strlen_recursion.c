#include <stdio.h>

/**
 * _strlen_recursion - a functiom that return the string length
 * @s: string to be checked
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);

	return (_strlen_recursion(s + i) + i);

}
