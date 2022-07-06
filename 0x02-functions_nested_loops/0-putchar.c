#include <stdio.h>
/**
 * main - A program that prints _putchar, followed
 * by a new line.
 *
 * Return: Exit program.
 */

int main(void)
{
	char output[] = "_putchar";
	int i = 0;
		for (i = 0; i <= 7; i++)
		{
			putchar (output[i]);
		}
		putchar ('\n');
	return (0);
}
