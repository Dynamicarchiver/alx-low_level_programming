#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar (c);
		if ((c = 'q'))
		{
			c = c + 2;
		}
		else
		{
			c++;
		}
	}
		putchar('\n');

		return (0);
}
