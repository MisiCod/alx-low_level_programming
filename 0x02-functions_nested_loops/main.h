#include <stdio.h>
void print_alphabet(void);
void print_alphabet_x10(void);
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
/**
 * print_alphabet 10 times - Function to print alphabet
 */
void print_alphabet_x10(void)
{
	char ch;
	int i = 0;
	while (i<9)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
		{
			putchar (ch);
		}
		i ++;
	}
	putchar('\n');
	return (0);
}

