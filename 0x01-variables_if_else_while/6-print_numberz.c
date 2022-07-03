#include <stdio.h>
/**
 * main - Print all single digit numbers of base 10 starting from 0
 *
 * Description: Write a program that prints all single digit
 * numbers of base 10 starting from 0, followed by a new line.
 * Return: Exit program
 */

int main(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		putchar ((i) + '0');
	}
	putchar('\n');
	return (0);
}
