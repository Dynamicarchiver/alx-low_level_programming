#include <stdio.h>

/**
 * factorial - a function that return the factorial of anumber
 * @n: the number to find its factorial
 * Return: n < 0 ? -1 : n == 0 ? 1 : factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
