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
	char ch;
	char CH;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar (ch);
	}
	for (CH = 'A' ; CH <= 'Z' ; CH++)
	{
		putchar (CH);
	}
	putchar('\n');
	return (0);
}
