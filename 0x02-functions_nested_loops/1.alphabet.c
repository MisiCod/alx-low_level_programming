#include <stdio.h>
#include "main.h"
/**
 * main - Print alphabet in lowercase
 *
 * Description: Write a program that prints the
 * alphabet in lowercase, followed by a new line.
 * Return: Exit program
 */

int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - Function to print alphabet
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar (ch);
	}
	putchar('\n');
}
