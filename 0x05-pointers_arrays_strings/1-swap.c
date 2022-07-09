#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: passed pointer address
 * @b: passed pointer 2
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int p;
	int pp;

	p = *b;
	pp = *a;
	*a = p;
	*b = pp;
}
