#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 Success
 */
int main(void)
{
	int a;

	a = 0;
	while (a <= 9)
	{
		putchar(a + '0');
		a++;
		if (a < 9)
		{
		putchar(',');
		putchar(32);
		}	
	}
	putchar('\n');
	return (0);
}
