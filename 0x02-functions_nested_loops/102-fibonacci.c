#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int a, b, c, sum;
	
	b = 0;
	c = 1;
	sum = 0;

	for (a = 0; a <= 50; a ++)
	{
		sum = b + c;
		printf("%d", sum);
		if (a < 50)
			printf(", ");
		else
			printf('\n');
		b = c;
		c = sum;
	}
}
