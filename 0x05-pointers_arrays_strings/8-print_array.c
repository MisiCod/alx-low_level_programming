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
	int max = n;
	int i, *ptr[max];

	for (i = 0; i < max; i++)
	{
		ptr[i] = &a[i];/* assign the address of integer. */
	}
	for (i = 0; i < max; i++)
	{
		printf("%d", *ptr[i]);
		if (i < max - 1)
		{
			_putchar(',');
		}
	}
	_putchar('\n');
}

