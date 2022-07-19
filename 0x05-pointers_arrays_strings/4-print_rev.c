#include "main.h"
#include <stdio.h>
/**
 * _puts - function that prints a string, followed by a new line
 * @str: passed character pointer
 *
 * Return: program exit.
 */

int main()
{
	int l = 0;
	int i = 0;
	int str[l];
	int rev[l];
	char *s;
	char *rev_add;
	char ss[4] = "blue";

	s = &ss[4];
	l = _strlen(ss[4]);
	for (i = 0; i <= l; i++)
	{
		rev[l] = str[i];
		l--;
		printf("%d\n", rev[l]);
	}
//	rev_add = &rev[l];
//	_puts(rev_add);
	return (0);
}
