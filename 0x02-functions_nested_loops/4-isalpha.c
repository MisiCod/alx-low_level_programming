#include <ctype.h>
#include "main.h"
/**
 * _isalpha - checks if the character is alphabetic.
 * @c:  passed argument
 *
 * Return: 1 if alpha 0 if not
 */
int _isalpha(int c)
{
	int confirm;

	confirm = (isalpha(c));
	if (confirm != 0)
	{
		confirm = 1;
	}
	return (confirm);
}
