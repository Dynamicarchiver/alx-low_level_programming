#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
				if (n % 10 && n % 10 > 5)
				{
					printf("Last digit of %d is %d and is greater than 5", n , n % 10);
				}
				else if (n % 10 == 0)
				{
					printf("Last digit of %d is %d and is 0");
				}
				else
				{
					printf("Last digit of %d is %d and is less than 6");
				}
					return (0);
}
