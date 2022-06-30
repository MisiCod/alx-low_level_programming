#include <stdio.h>
/**
 * main - Prints the size of various types on the computer
 *
 * Return: Exit program
 */

int main(void)
{
/* sizeof evaluates the size of a variable */
printf("Size of char: %lu\n", sizeof(char));
printf("Size of int: %lu\n", sizeof(int));
printf("Size of long int: %lu\n", sizeof(long int));
printf("Size of long long int: %lu\n", sizeof(long long int));
printf("Size of float: %lu\n", sizeof(float));
return (0);
}

