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
	for (a = 0; a < 98; a++)
	{
		sum = b + c;
		if (sum < 0)
		{
			sum *= -1;
		}
		printf("%d", sum);
		if (a < 97)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
		b = c;
		c = sum;
	}
	return (0);
}
