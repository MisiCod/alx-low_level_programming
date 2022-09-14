#include "main.h"
/**
 * alphabet_ten_times - Function to print alphabet
 *
 * Return: Exit program
 */
void alphabet_ten_times(void)
{
	char ch;
	int i = 0;

	while (i < 9)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
		{
			_putchar (ch);
		}
		_putchar('\n');
		i++;
	}
}
