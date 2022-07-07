#include <ctype.h>
#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9).
 * @c:  passed argument
 *
 * Return: 1 if uppercase 0 if not
 */
int _isdigit(int c)
{
	int confirm;

	confirm = (isdigit(c));
	if (confirm != 0)
	{
		confirm = 1;
	}
	return (confirm);
}
