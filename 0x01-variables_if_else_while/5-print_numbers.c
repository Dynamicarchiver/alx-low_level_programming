#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	a = 0;
	while (a <= 9)
	{
		printf("%d", a);
		a++;
	}
	printf("\n");

	return (0);
}