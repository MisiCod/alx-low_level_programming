#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_array - function that prints n elements of an array of
 * integers, followed by a new line
 * @a: integers to be printed
 * @n: number of elements of array to printed
 *
 * Return: program exit.
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");

}
