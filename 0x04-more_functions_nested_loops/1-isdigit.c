#include "main.h"

/**
 * _isdigit - Entry point
 * @c: number to check
 * Return: if c is a digit 1 else 0
 */
int _isdigit(int c);
{
	int c;

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
