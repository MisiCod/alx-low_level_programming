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
	char num;
	char space[] = ", ";

	for (num = '0' ; num <= '9' ; num++)
	{
		putchar (num);
		putchar(space[0]);
		putchar (space[1]);
	}
	putchar('\n');
	return (0);
}
