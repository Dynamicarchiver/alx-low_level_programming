#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * wordcount - counts words and letters
 * @str: string to count
 * @pos: position of the word characters
 * @firstchar: position of the first letter of the word
 * Return: wordcount
 */

int wordcount(char *str, int pos, char firstchar)
{
	int i, wordcount, charcount, flag;

	str[0] != ' ' ? (wordcount = 1) : (wordcount = 0);

	for (i = 0, flag = 0; str[i]; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0' && flag == 0)
		{
			wordcount++;
			flag = 1;
		}
		if (pos > 0 && pos == wordcount)
		{
			if (pos > 0 && pos == wordcount && firstchar > 0)
				return (i);
			for (charcount = 0; str[i + charcount + 1] != ' '; charcount++)
				;
			return (charcount);
		}
		if (str[i] == ' ')
			flag = 0;
	}
	return (wordcount);
}

/**
 * strtow - a function that returns a pointer to an array of atrings
 * @str: the string
 * Return: NULL of ""
 */

char **strtow(char *str)
{
	int wc, wordlen, getfirstchar, len, i, j;
	char **p;

	for (len = 0; str[len]; len++)
		;
	if (str == NULL)
		return (NULL);
	wc = wordcounter(str, 0, 0);
	if (len == 0 || wc == 0)
		return (NULL);
	p = malloc((wc + 1) * sizeof(void *));
	if (p == NULL)
		return (NULL);
	for (i = 0, wordlen = 0; i < wc; i++)
	{
		/* Allocate memory for nested elements */
		wordlen = wordcounter(str, i + 1, 0);
		if (i == 0 && str[i] != ' ')
			wordlen++;
		p[i] = malloc(wordlen * sizeof(char) + 1);
		if (p[i] == NULL)
		{
			for ( ; i >= 0; --i)
				free(p[i]);
			free(p);
			return (NULL);
		}
		/* initialize each element of the nested array with the word*/
		getfirstchar = wordcounter(str, i + 1, 1);
		if (str[0] != ' ' && i > 0)
			getfirstchar++;
		else if (str[0] == ' ')
			getfirstchar++;
		for (j = 0; j < wordlen; j++)
			p[i][j] = str[getfirstchar + j];
		p[i][j] = '\0';
	}
	p[i] = NULL;
	return (p);
}
