#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: first to concanates
 * @av: second to conanates
 * Return: a pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	int i, j, len, bufferlen;
	char *p;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	i = j = len = bufferlen = 0;
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	p = (char *)malloc(len * sizeof(char) + ac + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++, bufferlen++)
			p[bufferlen] = av[i][j];
		p[bufferlen] = '\n';
		bufferlen++;
	}
	p[bufferlen] = '\0';
	return (p);
}
