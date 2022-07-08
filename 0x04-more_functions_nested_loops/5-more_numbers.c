#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers from 0 - 9
 * except 2 and 4
 */

int main(void)
{
	char ones;
	char tens;
	int times = 0;

	while (times < 11)
	{
		for (tens = '0' ; tens <= '1' ; tens++)
		{
			for (ones = '0' ; ones <= '9' ; ones++)
			{
				if (tens == '0')
				{
					putchar(ones);
				}
				else
				{
					putchar(tens);
					putchar(ones);
				}
				if ( tens == '1' && ones == '4')
				{
					break;
				}
			}
		}
		times++;
			putchar('\n');
	}
	return(0);
}
