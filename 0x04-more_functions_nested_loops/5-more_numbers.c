#include "main.h"
/**
 * more_numbers - prints numbers from 0 - 14
 * ten times
 */

void more_numbers(void)
{
	char ones;
	char tens;
	int times = 0;

	while (times < 10)
	{
		for (tens = '0' ; tens <= '1' ; tens++)
		{
			for (ones = '0' ; ones <= '9' ; ones++)
			{
				if (tens != '0')
				{
					_putchar(tens);
				}
				_putchar(ones);
				if (tens == '1' && ones == '4')
				{
					break;
				}
			}
		}
		times++;
		_putchar('\n');
	}
}
