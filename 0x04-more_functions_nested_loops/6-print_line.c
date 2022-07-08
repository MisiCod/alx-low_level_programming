#include "main.h"

/**
 * print_line - check for a digit
 * @n : number of _ to be printed
 * Return:void
 */
void print_line(int n)
{
	char line = '_';

	if (n <= 0)
	{
		_putchar('\\' + 'n');
	}
	_putchar((line * n) + '\\' + 'n');
}
