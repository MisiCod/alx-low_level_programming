#include "main.h"
/**
 * print_triangle - prints triangle followed by a new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int lines = 0;

	while (lines < size)
	{
		int rows;
		int col = 0;

		for (rows = lines; rows < size - 1; rows++)
		{
			putchar(' ');
		}
		for (rows = lines; rows >= col; col++)
		{
			putchar('#');
		}
		putchar('\n');
		lines++;
	}
}
