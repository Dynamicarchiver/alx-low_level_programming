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
	int num1, num2, mul;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	
	 printf("%d\n", mul);
	

	return (0);

}
