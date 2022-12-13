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
		if ((c == 'q' || c == 'e'))
		{
			c = c + 2;
		}
		else 
		{
			putchar(c);
			c++;
		}
		putchar('\n');
	}
		return (0);
}
