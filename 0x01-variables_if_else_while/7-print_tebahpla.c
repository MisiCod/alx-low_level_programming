#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse,
 *
 * Description: Write a program that prints the
 * alphabet in lowercase but reverse, followed by a new line.
 * Return: Exit program
 */

int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
		putchar (ch);
	}
	putchar('\n');
	return (0);
}
