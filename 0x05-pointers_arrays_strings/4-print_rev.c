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
	int l;

	for (l = strlen(s); l >= 0 ; l--)
	{
		_putchar(s[l]);
	}
}
