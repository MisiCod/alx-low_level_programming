#include "main.h"
#include <string.h>
/**
 * print_rev - function that prints a string,
 * in reverse, followed by a new line.
 *
 * @s: pointer to string
 *
 * Return: void.
 */


void print_rev(char *s)
{
	int l = strlen(s);

	for (l; l >= 0 ; l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
