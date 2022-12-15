#include "main.h"

int mul(int a, int b)
{
	int c;

	c = a * b;
	if (c < 0)
	{
		_putchar('-);
		return (c);
	}
	return (c);
}
