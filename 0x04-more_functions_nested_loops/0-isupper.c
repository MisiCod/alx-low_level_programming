#include <ctype.h>
#include "main.h"
/**
 * _isupper - checks if the character is uppercase
 * @c:  passed argument
 *
 * Return: 1 if uppercase 0 if not
 */
int _isupper(int c)
{
	int confirm;

	confirm = (isupper(c));
	if (confirm != 0)
	{
		confirm = 1;
	}
	return (confirm);
}
