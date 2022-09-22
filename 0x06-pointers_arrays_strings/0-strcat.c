#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_strcat - function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	/**make `ptr` point to the end of the dest string*/
	char *ptr = dest + strlen(dest);
	/**appends characters of the src to the dest string*/
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	/**null to terminate destination string*/
	*ptr = '\0';
	/**the destination is returned by standard `strcat()`*/
	return (dest);
}

