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
	char ch;

	for (ch = '1' ; ch <= '9' ; ch++)
	{
		putchar (ch);
	}
	putchar('\n');
	return (0);
}
