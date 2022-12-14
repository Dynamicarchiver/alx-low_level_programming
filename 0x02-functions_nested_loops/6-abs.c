#include "main.h"

/**
 * _abs - Entry point
 * @a: number to be read
 * return: the absolute value of number
 */
int _abs(int a)
{
	if (a < 0)
	{
		return (a * (-1));
	}
	else
	{
		return (a);
	}
}
