#include <stdio.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int c = 'A';
	int result = tolower(c);
	while (result <= 'Z')
	putchar("%d\n", result);
	result++;

	return(0);
	
}
