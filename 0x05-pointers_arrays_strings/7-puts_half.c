#include "main.h"
#include <string.h>
/**
 * puts_half - function that prints a half of the string
 * followed by a new line
 * @str: string to be printed
 *
 * Return: program exit.
 */
void puts_half(char *str)
{
	int max = (strlen(str));
	int i;


	if (max % 2 == 1)
	{
		i = ((max - 1) / 2) + 1;
	}
	else
	{
		i = max / 2;
	}
	while (i < max)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
