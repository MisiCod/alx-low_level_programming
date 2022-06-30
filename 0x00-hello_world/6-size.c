#include <stdio.h>
/**
 * main - Prints the size of various types on the computer
 *
 * Return: Exit program
 */

int main(void)
{
/* sizeof evaluates the size of a variable */
printf("Size of char: %d\n", sizeof(char));
printf("Size of int: %d\n", sizeof(int));
printf("Size of long int: %d\n", sizeof(long int));
printf("Size of long long int: %d\n", sizeof(long long int));
printf("Size of float: %d\n", sizeof(float));
return (0);
}

