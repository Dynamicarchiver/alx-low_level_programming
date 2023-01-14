#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	long int a, b, c, sum;

	b = 0;
	c = 1;
	sum = 0;

	for (a = 0; a < 50; a++)
	{
		sum = b + c;
		printf("%ld", sum);
		if (a < 49)
			printf(", ");
		b = c;
		c = sum;
	}
	printf("\n");
	return (0);
}
