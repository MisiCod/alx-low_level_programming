#include <stdio.h>
/**
 * print_alphabet - Function to print alphabet
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
