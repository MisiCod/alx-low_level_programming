#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_strncat - function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: bytes to be used for concatenation
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	size_t dest_len = strlen(dest);
	size_t i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
