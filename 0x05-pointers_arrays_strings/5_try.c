//#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - function that reverses a string,
 *
 * @s: pointer to string
 *
 * Return: void.
 */


void rev_string(char *s)
{
	int l,x,i;
	int MAX=strlen(s)-1;
	char  *revp[MAX];

	for (l = (strlen(s) - 1) ; l >= 0 ; l--)
	{
		 revp[l]=(&s[l]);
		 // putchar(*revp[l]);
	}

	//revp[MAX] = &s[MAX];
	x=0;
	for (i = MAX-2; i >= 0; i--)
	{
		s[x] = *revp[i];
		x++;
	}
}

int main (void)
{
	char s[10] = "Mybus";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
