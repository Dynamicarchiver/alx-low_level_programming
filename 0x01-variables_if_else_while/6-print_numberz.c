#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long a;

	a = 0;
	while (a <= 9)
	{
		putchar('a');
		a++;
	}
	putchar('\n');
	return (0);
}
