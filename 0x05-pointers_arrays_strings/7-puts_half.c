#include "main.h"
#include <string.h>
/**
 * puts2 - function that prints a string one after the other
 * , followed by a new line
 * @str: string to be printed
 *
 * Return: program exit.
 */
void puts2(char *str)
{
	int max = (strlen(str));
	int i;

	if (max % 2 == 1 )
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

