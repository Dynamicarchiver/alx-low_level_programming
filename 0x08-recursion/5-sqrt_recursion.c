#include "main.h"

/**
 * sqrt_check - function to check the sqrt
 * @n: number to be checked
 * @c: number checked
 * Return: the number
 */

int sqrt_check(int n, int c)
{
	if (c * c == n)
		return (c);

	if (c >= n / 2)
		return (-1);

	return (sqrt_check(n, c + 1));
}

/**
 * _sqrt_recursion - a function that return the square root of a number
 * @n: the number to check it square root
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);

	return (sqrt_check(n, 1));
}
