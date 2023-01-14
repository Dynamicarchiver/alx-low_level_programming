#include "main.h"
#include <stdio.h>

/**
 * print_times_table - A functio that print time table of n 
 * @n: numbers of times to print timetable
 * Return: 0
 */

void print_times_table(int n)
{
	int a, b, c;

	if (n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;

				printf("%d", c);
				if (b < n)
				{
					int d = a * (b + 1);

					if (d < 10)
					{
						printf(",   ");
					}
					else if(d < 100)
					{
						printf(",  ");
					}
					else
					{
						printf(", ");
					}
				}
				else
				{
					printf("\n");
				}
			}
		}
	}
	printf("\n");
}
