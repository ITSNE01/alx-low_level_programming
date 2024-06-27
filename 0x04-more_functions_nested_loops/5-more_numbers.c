#include "main.h"

/**
 * more_numbers - prints 10 times the nombers
 * from 0 to 14
 */

void more_numbers(void)
{
	int r, num;

	for (r = 0; r < 10; r++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
