#include <stdio.h>
/**
 * alphabet_ten_times - Function to print alphabet
 *
 * Return: Exit program
 */
int alphabet_ten_times(void)
{
	char ch;
	int i = 0;

	while (i < 10)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
		{
			putchar (ch);
		}
		putchar('\n');
		i++;
	}
	return (0);
}
