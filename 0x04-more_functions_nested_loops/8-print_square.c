#include "main.h"

/**
 * print_square - check for a digit
 * @n : number of _ to be printed
 * Return:void
 */

void print_square(int n)
{

	int col = 0, rows;

	while (col < n && n > 0)
	{
		rows = 0;
		while (rows < n)
		{
			_putchar('#');
			rows++;
		}

		_putchar('\n');
		col++;
	}
	if (col == 0)
		_putchar('\n');

}
