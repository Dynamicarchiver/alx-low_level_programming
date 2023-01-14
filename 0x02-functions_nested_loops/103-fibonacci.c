#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	long int a, b, c, sum, add;

	b = 0;
	c = 1;
	sum = 0;
	for (a = 0; (sum) <= 4000000; a++)
	{
		sum = b + c;
		if ((sum % 2) == 0)
		{
			add += sum;
		}
		b = c;
		c = sum;
	}
	printf("%ld\n", add);
	return (0);
}
