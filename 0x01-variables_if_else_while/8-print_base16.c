#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) success
 */
int main(void)
{
	int a;

	while(a < 16)
	{
		if (a < 10)
		{
			putchar('0' + a);
		}
		else
		{
			putchar(87 + a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
