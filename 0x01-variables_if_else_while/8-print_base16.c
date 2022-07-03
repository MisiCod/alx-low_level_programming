#include <stdio.h>
/**
 * main - prints the prints all the numbers of base 16 in lowercase
 *
 * Description: Write a program that prints the
 * numbers of base 16 in lowercase, followed by a new line.
 * Return: Exit program
 */

int main(void)
{
	char num;
	char ch;

	for (num = '0' ; num <= '9' ; num++)
	{
		putchar (num);
	}
	for (ch = 'a' ; ch <= 'f' ; ch++)
	{
		putchar (ch);
	}
	putchar('\n');
	return (0);
}
