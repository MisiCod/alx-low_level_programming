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

	for (i = 0; i < max; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

