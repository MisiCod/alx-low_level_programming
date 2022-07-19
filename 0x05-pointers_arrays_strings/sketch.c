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
	int length = strlen(s);

	for (length; length >= 0 ; length--)
	{
		_putchar(s[length]);
	}
}
