#include <stdio.h>
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
