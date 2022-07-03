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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n,n);
	}
	else if (n < 6 && n > 0)
	{
		printf("Last digit of %d is %d and is less than 6 not 0 \n", n,n);
	}
	else
	{
		printf("Last digit of %d is %d and is zero\n", n,n);
	}
	return (0);
}
