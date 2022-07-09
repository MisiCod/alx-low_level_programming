#include <ctype.h>
#include "main.h"
/**
 * _islower - checks if the character is lowercase.
 * @c:  passed argument
 *
 * Return: 1 if uppercase 0 if not
 */
int _islower(int c)
{
	int confirm;

	confirm = (islower(c));
	if (confirm != 0)
	{
		confirm = 1;
	}
	return (confirm);
}
