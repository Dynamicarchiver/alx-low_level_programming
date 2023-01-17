#include "main.h"

/**
 * _pow_recursion - a function that return x raise to the power of y
 * @x: number to be raised
 * @y: number raised
 * Return : x raise to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

