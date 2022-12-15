#include "main.h"

/**
 * _isupper - Entry point
 * @c: letter to check
 * Return:1 when c is uppercase,otherwise false
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
