#include <stdio.h>
/**
 * main - Prints the size of various types on the computer
 * @intType: Integer type
 * @longintType: Long Integer type
 * @longlongintType: Longer Integer type
 * @floatType: float type
 * @charType: Character Type
 *
 * Return: Exit program
 */

int main(void)
{
int intType;
int longintType;
int longlongintType;
char charType;
float floatType;

/* sizeof evaluates the size of a variable */
printf("Size of char: %zu byte\n", sizeof(charType));
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of long int: %zu bytes\n", sizeof(longintType));
printf("Size of long long int: %zu bytes\n", sizeof(longlongintType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
return (0);
}

