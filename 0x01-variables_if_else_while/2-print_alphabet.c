#include <stdio.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c = 'A';
	char result = tolower(c);
	while (result <= 'Z')
	putchar("%c\n", result);
	result++;

	return(0);
	
}
