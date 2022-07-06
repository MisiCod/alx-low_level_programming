#include <stdio.h>
/**
 * alphabet - Function to print alphabet
 *
 * Return: Exit program
 */
int alphabet(void)
{
char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar (ch);
}
putchar('\n');
return (0);
}
