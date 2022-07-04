
#include <stdio.h>
/**
 * main - Print alphabet in lowercase
 *
 * Description: Write a program that prints the
 * alphabet in lowercase, followed by a new line.
 * Return: Exit program
 */

int main(void)
{
	int num;

	for (num = 0 ; num <= 9 ; num++)
	{
		putchar ((num) + '0');
		if (num == 9)
		{
			break;
		}
		putchar (',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
