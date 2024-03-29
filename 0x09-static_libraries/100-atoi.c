#include "main.h"

/**
 * _atoi - a functio that convert a string to an integr
 * @s: the string to be convertd to an integer
 * Return: the string that is converted to an integer
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = num * 10 + *s - '0';

		else if (num > 0)
			break;
	} while (*s++);

	return (sign * num);
}
