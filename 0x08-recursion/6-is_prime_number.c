#include "main.h"

/**
 * prime_check - a function to check if n is a prime number
 * @n: number to be checked
 * @c: number to be checked with
 * Return: the prime number
 */

int prime_check(int n, int c)
{
	if (n % c == 0 && c != n / 2)
		return (0);
	else if (c >= n / 2)
		return (1);
	else
		return (prime_check(n, c + 1));
}

/**
 * is_prime_number - a function to check if n is a primr number
 * @n: number to be checked
 * Return: 1 if prime else 0
 */

int is_prime_number(int n)
{
	if (n > 1)
		return (prime_check(n, 2));
	if (n < 0)
		return (0);
	return (0);
}
