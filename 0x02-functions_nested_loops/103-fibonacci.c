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
	for (a = 0; (sum) <= 4000000; a++)
	{
		sum = b + c;
		if ((sum % 2) == 0)
		{
			printf("%ld\n");
		}
		b = c;
		c = sum;
	}
	return (0);
}
