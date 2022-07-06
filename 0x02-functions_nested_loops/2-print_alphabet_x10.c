#include <stdio.h>
/**
 * alphabet - Function to print alphabet
 *
 * Return: Exit program
 */
int alphabet_ten_times(void)
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
