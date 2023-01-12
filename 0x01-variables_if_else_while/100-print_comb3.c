#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			if (b != a && b > a)
			{
				putchar(a + '0');
				putchar(b + '0');
				if (a < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
