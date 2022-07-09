#include "main.h"
/**
 * print_triangle - prints triangle followed by a new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int lines = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (lines < size)
		{
			int rows;
			int col = 0;

			for (rows = lines; rows < size - 1; rows++)
			{
				_putchar(' ');
			}
			for (rows = lines; rows >= col; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
			lines++;
		}
	}
}
