#include "main.h"

/**
 * reverse_array - Entry poiny
 * @a: content
 * @n: elements of contents
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int s;

	for (i = 0; i < n; i++)
	{
		n--;
		s = a[i];
		a[i] = a[n];
		a[n] = s;
	}

}
