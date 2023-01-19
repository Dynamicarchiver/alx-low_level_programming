#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of argument passed
 * @argv: characters of argument passed
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	else if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
		mul = atoi(argv[i]) * mul;
	}
	 printf("%d\n", mul);
	}

	return (0);

}
