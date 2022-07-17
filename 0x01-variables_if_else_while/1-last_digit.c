#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Generate a random number and tell if its -tive,0 or +tive
 *
 * Description: srand\() uses its argument seed as a seed for a new
 * sequence of pseudo-random numbers to be returned by subsequent
 * calls to rand\().
 * The constant RAND_MAX is the maximum value that can be returned
 * by the rand function. RAND_MAX is defined as the value 0x7fff.
 * Return: Exit program.
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	x = n % 10;

	if (x > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	}
	else if (x < 6 && x != 0)
	{
		printf("Last digit of %d is %d and is less than 6 not 0\n", n, x
			);
	}
	else if (x == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, x);
	}
	return (0);
}
